<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * MyEnum
 */
enum MyEnum : int {
  MyValue1 = 0;
  MyValue2 = 1;
}
type MyEnumType = MyEnum;

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'MyIntField',
      'type' => \TType::I64,
      ],
    2 => dict[
      'var' => 'MyStringField',
      'type' => \TType::STRING,
      ],
    3 => dict[
      'var' => 'MyDataField',
      'type' => \TType::STRUCT,
      'class' => 'MyDataItem',
      ],
    4 => dict[
      'var' => 'major',
      'type' => \TType::I64,
      ],
    5 => dict[
      'var' => 'myEnum',
      'type' => \TType::I32,
      'enum' => 'MyEnum',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'MyIntField' => 1,
    'MyStringField' => 2,
    'MyDataField' => 3,
    'major' => 4,
    'myEnum' => 5,
  };
  const type TShape = shape(
    'MyIntField' => int,
    'MyStringField' => string,
    ?'MyDataField' => ?MyDataItem::TShape,
    'major' => int,
    ?'myEnum' => ?MyEnum,
    ...
  );
  const int STRUCTURAL_ID = 6402813204152193102;
  /**
   * Original thrift field:-
   * 1: i64 MyIntField
   */
  public int $MyIntField;
  /**
   * Original thrift field:-
   * 2: string MyStringField
   */
  public string $MyStringField;
  /**
   * Original thrift field:-
   * 3: struct module.MyDataItem MyDataField
   */
  public ?MyDataItem $MyDataField;
  /**
   * Original thrift field:-
   * 4: i64 major
   */
  public int $major;
  /**
   * Original thrift field:-
   * 5: enum module.MyEnum myEnum
   */
  public ?MyEnum $myEnum;

  public function __construct(?int $MyIntField = null, ?string $MyStringField = null, ?MyDataItem $MyDataField = null, ?int $major = null, ?MyEnum $myEnum = null  ) {
    if ($MyIntField === null) {
      $this->MyIntField = 0;
    } else {
      $this->MyIntField = $MyIntField;
    }
    if ($MyStringField === null) {
      $this->MyStringField = '';
    } else {
      $this->MyStringField = $MyStringField;
    }
    $this->MyDataField = $MyDataField;
    if ($major === null) {
      $this->major = 0;
    } else {
      $this->major = $major;
    }
    $this->myEnum = $myEnum;
  }

  public function getName(): string {
    return 'MyStruct';
  }

  public static function __jsonArrayToShape(
    dict<arraykey, mixed> $json_data,
  ): ?self::TShape {
    $shape_data = $json_data;

    if (!C\contains_key($shape_data, 'MyIntField')) {
      $shape_data['MyIntField'] = 0;
    }
    if (!($shape_data['MyIntField'] is int)) {
      return null;
    }

    if (!C\contains_key($shape_data, 'MyStringField')) {
      $shape_data['MyStringField'] = '';
    }
    if (!($shape_data['MyStringField'] is string)) {
      return null;
    }

    if (!C\contains_key($shape_data, 'MyDataField')) {
      $shape_data['MyDataField'] = null;
    }
    if ($shape_data['MyDataField'] is nonnull) {
      $shape_data['MyDataField'] = MyDataItem::__jsonArrayToShape(/* HH_IGNORE_ERROR[4110] */ $shape_data['MyDataField']);
      if (is_null($shape_data['MyDataField'])) {
        return null;
      }
    }

    if (!C\contains_key($shape_data, 'major')) {
      $shape_data['major'] = 0;
    }
    if (!($shape_data['major'] is int)) {
      return null;
    }

    if (!C\contains_key($shape_data, 'myEnum')) {
      $shape_data['myEnum'] = null;
    }
    if (!($shape_data['myEnum'] is int) && $shape_data['myEnum'] is nonnull) {
      return null;
    }

    return /* HH_IGNORE_ERROR[4110] */ $shape_data;
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = /* HH_IGNORE_ERROR[4060] */ new static();
    $me->MyIntField = $shape['MyIntField'];
    $me->MyStringField = $shape['MyStringField'];
    $me->MyDataField = Shapes::idx($shape, 'MyDataField') === null ? null : MyDataItem::__fromShape(nullthrows(Shapes::idx($shape, 'MyDataField')));
    $me->major = $shape['major'];
    $me->myEnum = Shapes::idx($shape, 'myEnum');
    return $me;
  }

  public function __toShape(): self::TShape {
    return shape(
      'MyIntField' => $this->MyIntField,
      'MyStringField' => $this->MyStringField,
      'MyDataField' => $this->MyDataField?->__toShape(),
      'major' => $this->major,
      'myEnum' => $this->myEnum,
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !is_array($parsed)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'MyIntField') !== null) {
      $this->MyIntField = $parsed['MyIntField'];
    }    
    if (idx($parsed, 'MyStringField') !== null) {
      $this->MyStringField = $parsed['MyStringField'];
    }    
    if (idx($parsed, 'MyDataField') !== null) {
      $_tmp0 = json_encode($parsed['MyDataField']);
      $_tmp1 = new MyDataItem();
      $_tmp1->readFromJson($_tmp0);
      $this->MyDataField = $_tmp1;
    }    
    if (idx($parsed, 'major') !== null) {
      $this->major = $parsed['major'];
    }    
    if (idx($parsed, 'myEnum') !== null) {
      $this->myEnum = MyEnum::coerce($parsed['myEnum']);    }    
  }

}

/**
 * Original thrift struct:-
 * MyDataItem
 */
class MyDataItem implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'MyDataItem';
  }

  public static function __jsonArrayToShape(
    dict<arraykey, mixed> $json_data,
  ): ?self::TShape {
    $shape_data = $json_data;

    return /* HH_IGNORE_ERROR[4110] */ $shape_data;
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = /* HH_IGNORE_ERROR[4060] */ new static();
    return $me;
  }

  public function __toShape(): self::TShape {
    return shape(
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !is_array($parsed)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}


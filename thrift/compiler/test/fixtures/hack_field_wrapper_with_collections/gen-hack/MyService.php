<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): MyStruct;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): MyStruct;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncClientIf extends MyServiceAsyncIf {
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct>;
}

/**
 * Original thrift service:-
 * MyService
 */
trait MyServiceClientBase {
  require extends \ThriftClientBase;

}

class MyServiceAsyncClient extends \ThriftClientBase implements MyServiceAsyncClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public async function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = MyService_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    await $this->asyncHandler_->genBefore("MyService", "func", $args);
    $currentseqid = $this->sendImplHelper($args, "func", false);
    return await $this->genAwaitResponse(MyService_func_result::class, "func", false, $currentseqid, $rpc_options);
  }

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public async function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = MyService_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    await $this->asyncHandler_->genBefore("MyService", "func1", $args);
    $currentseqid = $this->sendImplHelper($args, "func1", false);
    return await $this->genAwaitResponse(MyService_func1_result::class, "func1", false, $currentseqid, $rpc_options);
  }

}

class MyServiceClient extends \ThriftClientBase implements MyServiceClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   func(1: string arg1,
   *        2: MyStruct arg2);
   */
  public async function func(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = MyService_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    await $this->asyncHandler_->genBefore("MyService", "func", $args);
    $currentseqid = $this->sendImplHelper($args, "func", false);
    return await $this->genAwaitResponse(MyService_func_result::class, "func", false, $currentseqid, $rpc_options);
  }

  /**
   * Original thrift definition:-
   * MyStruct
   *   func1(1: string arg1,
   *         2: MyStruct arg2);
   */
  public async function func1(string $arg1, ?MyStruct $arg2): Awaitable<MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = MyService_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    await $this->asyncHandler_->genBefore("MyService", "func1", $args);
    $currentseqid = $this->sendImplHelper($args, "func1", false);
    return await $this->genAwaitResponse(MyService_func1_result::class, "func1", false, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_func(string $arg1, ?MyStruct $arg2): int {
    $args = MyService_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    return $this->sendImplHelper($args, "func", false);
  }
  public function recv_func(?int $expectedsequenceid = null): MyStruct {
    return $this->recvImplHelper(MyService_func_result::class, "func", false, $expectedsequenceid);
  }
  public function send_func1(string $arg1, ?MyStruct $arg2): int {
    $args = MyService_func1_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
    ));
    return $this->sendImplHelper($args, "func1", false);
  }
  public function recv_func1(?int $expectedsequenceid = null): MyStruct {
    return $this->recvImplHelper(MyService_func1_result::class, "func1", false, $expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class MyService_func_args implements \IThriftSyncStruct, \IThriftShapishAsyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'arg1',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'arg2',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg1' => 1,
    'arg2' => 2,
  ];

  const type TConstructorShape = shape(
    ?'arg1' => ?string,
    ?'arg2' => ?MyStruct,
  );

  const type TShape = shape(
    'arg1' => string,
    ?'arg2' => ?MyStruct::TShape,
  );
  const int STRUCTURAL_ID = 6560600906529955702;
  public string $arg1;
  public ?MyStruct $arg2;

  public function __construct(?string $arg1 = null, ?MyStruct $arg2 = null)[] {
    $this->arg1 = $arg1 ?? '';
    $this->arg2 = $arg2;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg1'),
      Shapes::idx($shape, 'arg2'),
    );
  }

  public function getName()[]: string {
    return 'MyService_func_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.func_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "arg1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "arg2",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __stringifyMapKeys<T>(Map<arraykey, T> $m)[]: Map<string, T> {
    $new = dict[];
    foreach ($m as $k => $v) {
      $new[(string)$k] = $v;
    }
    return new Map($new);
  }

  public static async function __genFromShape(self::TShape $shape): Awaitable<this> {
    $obj = new static();
    $obj->arg1 = $shape['arg1'];
    $arg2 = Shapes::idx($shape, 'arg2');
    if ($arg2 !== null) {
      $obj->arg2 = await MyStruct::__genFromShape($arg2);
    }
    return $obj;
  }

  public async function __genToShape(): Awaitable<self::TShape> {
    return shape(
      'arg1' => $this->arg1,
      'arg2' => await ($this->arg2 === null 
        ? null 
        : (
        $this->arg2->__genToShape()
        )
      ),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'arg1') !== null) {
      $this->arg1 = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['arg1']);
    }
    if (idx($parsed, 'arg2') !== null) {
      $_tmp0 = json_encode(HH\FIXME\UNSAFE_CAST<mixed, MyStruct>($parsed['arg2']));
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg2 = $_tmp1;
    }
  }

}

class MyService_func_result extends \ThriftSyncStructWithResult {
  use \ThriftSerializationTrait;

  const type TResult = MyStruct;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 7307096097859369800;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_func_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyService_func_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = json_encode(HH\FIXME\UNSAFE_CAST<mixed, MyStruct>($parsed['success']));
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class MyService_func1_args implements \IThriftSyncStruct, \IThriftShapishAsyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'arg1',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'arg2',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg1' => 1,
    'arg2' => 2,
  ];

  const type TConstructorShape = shape(
    ?'arg1' => ?string,
    ?'arg2' => ?MyStruct,
  );

  const type TShape = shape(
    'arg1' => string,
    ?'arg2' => ?MyStruct::TShape,
  );
  const int STRUCTURAL_ID = 6560600906529955702;
  public string $arg1;
  public ?MyStruct $arg2;

  public function __construct(?string $arg1 = null, ?MyStruct $arg2 = null)[] {
    $this->arg1 = $arg1 ?? '';
    $this->arg2 = $arg2;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg1'),
      Shapes::idx($shape, 'arg2'),
    );
  }

  public function getName()[]: string {
    return 'MyService_func1_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.func1_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "arg1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "arg2",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __stringifyMapKeys<T>(Map<arraykey, T> $m)[]: Map<string, T> {
    $new = dict[];
    foreach ($m as $k => $v) {
      $new[(string)$k] = $v;
    }
    return new Map($new);
  }

  public static async function __genFromShape(self::TShape $shape): Awaitable<this> {
    $obj = new static();
    $obj->arg1 = $shape['arg1'];
    $arg2 = Shapes::idx($shape, 'arg2');
    if ($arg2 !== null) {
      $obj->arg2 = await MyStruct::__genFromShape($arg2);
    }
    return $obj;
  }

  public async function __genToShape(): Awaitable<self::TShape> {
    return shape(
      'arg1' => $this->arg1,
      'arg2' => await ($this->arg2 === null 
        ? null 
        : (
        $this->arg2->__genToShape()
        )
      ),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'arg1') !== null) {
      $this->arg1 = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['arg1']);
    }
    if (idx($parsed, 'arg2') !== null) {
      $_tmp0 = json_encode(HH\FIXME\UNSAFE_CAST<mixed, MyStruct>($parsed['arg2']));
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg2 = $_tmp1;
    }
  }

}

class MyService_func1_result extends \ThriftSyncStructWithResult {
  use \ThriftSerializationTrait;

  const type TResult = MyStruct;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 7307096097859369800;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_func1_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyService_func1_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = json_encode(HH\FIXME\UNSAFE_CAST<mixed, MyStruct>($parsed['success']));
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class MyServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.MyService",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "func",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "arg1",
                  )
                ),
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "module.MyStruct",
                          )
                        ),
                      )
                    ),
                    "name" => "arg2",
                  )
                ),
              ],
            )
          ),
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "func1",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "arg1",
                  )
                ),
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "module.MyStruct",
                          )
                        ),
                      )
                    ),
                    "name" => "arg2",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
              'module.MyStruct' => MyStruct::getStructMetadata(),
              'module.MyNestedStruct' => MyNestedStruct::getStructMetadata(),
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}


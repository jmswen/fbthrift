<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace facebook\thrift\test;

/**
 * Original thrift service:-
 * AdapterService
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/AdapterService'))>>
interface AdapterServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * CountingStruct
   *   count();
   */
  public function count(): Awaitable<\facebook\thrift\test\CountingStruct>;

  /**
   * Original thrift definition:-
   * HeapAllocated
   *   adaptedTypes(1: HeapAllocated arg);
   */
  public function adaptedTypes(?\facebook\thrift\test\HeapAllocated $arg): Awaitable<\facebook\thrift\test\HeapAllocated>;
}

/**
 * Original thrift service:-
 * AdapterService
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/AdapterService'))>>
interface AdapterServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * CountingStruct
   *   count();
   */
  public function count(): \facebook\thrift\test\CountingStruct;

  /**
   * Original thrift definition:-
   * HeapAllocated
   *   adaptedTypes(1: HeapAllocated arg);
   */
  public function adaptedTypes(?\facebook\thrift\test\HeapAllocated $arg): \facebook\thrift\test\HeapAllocated;
}

/**
 * Original thrift service:-
 * AdapterService
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/AdapterService'))>>
interface AdapterServiceAsyncClientIf extends AdapterServiceAsyncIf {
}

/**
 * Original thrift service:-
 * AdapterService
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/AdapterService'))>>
interface AdapterServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * CountingStruct
   *   count();
   */
  public function count(): Awaitable<\facebook\thrift\test\CountingStruct>;

  /**
   * Original thrift definition:-
   * HeapAllocated
   *   adaptedTypes(1: HeapAllocated arg);
   */
  public function adaptedTypes(?\facebook\thrift\test\HeapAllocated $arg): Awaitable<\facebook\thrift\test\HeapAllocated>;
}

/**
 * Original thrift service:-
 * AdapterService
 */
trait AdapterServiceClientBase {
  require extends \ThriftClientBase;

  /**
   * Original thrift definition:-
   * CountingStruct
   *   count();
   */
  public async function count(): Awaitable<\facebook\thrift\test\CountingStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \facebook\thrift\test\AdapterService_count_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("AdapterService", "count", $args);
    $currentseqid = $this->sendImplHelper($args, "count", false, "AdapterService" );
    return await $this->genAwaitResponse(\facebook\thrift\test\AdapterService_count_result::class, "count", false, $currentseqid, $rpc_options);
  }

  /**
   * Original thrift definition:-
   * HeapAllocated
   *   adaptedTypes(1: HeapAllocated arg);
   */
  public async function adaptedTypes(?\facebook\thrift\test\HeapAllocated $arg): Awaitable<\facebook\thrift\test\HeapAllocated> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \facebook\thrift\test\AdapterService_adaptedTypes_args::fromShape(shape(
      'arg' => $arg,
    ));
    await $this->asyncHandler_->genBefore("AdapterService", "adaptedTypes", $args);
    $currentseqid = $this->sendImplHelper($args, "adaptedTypes", false, "AdapterService" );
    return await $this->genAwaitResponse(\facebook\thrift\test\AdapterService_adaptedTypes_result::class, "adaptedTypes", false, $currentseqid, $rpc_options);
  }

}

class AdapterServiceAsyncClient extends \ThriftClientBase implements AdapterServiceAsyncClientIf {
  use AdapterServiceClientBase;

}

class AdapterServiceClient extends \ThriftClientBase implements AdapterServiceClientIf {
  use AdapterServiceClientBase;

  /* send and recv functions */
  public function send_count(): int {
    $args = \facebook\thrift\test\AdapterService_count_args::withDefaultValues();
    return $this->sendImplHelper($args, "count", false, "AdapterService" );
  }
  public function recv_count(?int $expectedsequenceid = null): \facebook\thrift\test\CountingStruct {
    return $this->recvImplHelper(\facebook\thrift\test\AdapterService_count_result::class, "count", false, $expectedsequenceid);
  }
  public function send_adaptedTypes(?\facebook\thrift\test\HeapAllocated $arg): int {
    $args = \facebook\thrift\test\AdapterService_adaptedTypes_args::fromShape(shape(
      'arg' => $arg,
    ));
    return $this->sendImplHelper($args, "adaptedTypes", false, "AdapterService" );
  }
  public function recv_adaptedTypes(?int $expectedsequenceid = null): \facebook\thrift\test\HeapAllocated {
    return $this->recvImplHelper(\facebook\thrift\test\AdapterService_adaptedTypes_result::class, "adaptedTypes", false, $expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class AdapterService_count_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'AdapterService_count_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.count_args",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
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

  }

}

class AdapterService_count_result extends \ThriftSyncStructWithResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const type TResult = \facebook\thrift\test\CountingStruct;

  const \ThriftStructTypes::TSpec SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => \facebook\thrift\test\CountingStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 361061362707289990;
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
    return 'AdapterService_count_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.AdapterService_count_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.CountingStruct",
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

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
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
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\CountingStruct>($parsed['success']));
      $_tmp1 = \facebook\thrift\test\CountingStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class AdapterService_adaptedTypes_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'arg',
      'type' => \TType::STRUCT,
      'class' => \facebook\thrift\test\HeapAllocated::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg' => 1,
  ];

  const type TConstructorShape = shape(
    ?'arg' => ?\facebook\thrift\test\HeapAllocated,
  );

  const type TShape = shape(
    ?'arg' => ?\facebook\thrift\test\HeapAllocated::TShape,
  );
  const int STRUCTURAL_ID = 270071957836224163;
  public ?\facebook\thrift\test\HeapAllocated $arg;

  public function __construct(?\facebook\thrift\test\HeapAllocated $arg = null)[] {
    $this->arg = $arg;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg'),
    );
  }

  public function getName()[]: string {
    return 'AdapterService_adaptedTypes_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.adaptedTypes_args",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.HeapAllocated",
                    )
                  ),
                )
              ),
              "name" => "arg",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'arg' => shape(
          'field' => dict[],
          'type' => dict[
            '\facebook\thrift\annotation\cpp\Adapter' => \facebook\thrift\annotation\cpp\Adapter::fromShape(
              shape(
                "name" => "::apache::thrift::test::MoveOnlyAdapter",
                "moveOnly" => true,
              )
            ),
          ],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg') |> $$ === null ? null : (\facebook\thrift\test\HeapAllocated::__fromShape($$)),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'arg' => $this->arg?->__toShape(),
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

    if (idx($parsed, 'arg') !== null) {
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\HeapAllocated>($parsed['arg']));
      $_tmp1 = \facebook\thrift\test\HeapAllocated::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg = $_tmp1;
    }
  }

}

class AdapterService_adaptedTypes_result extends \ThriftSyncStructWithResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const type TResult = \facebook\thrift\test\HeapAllocated;

  const \ThriftStructTypes::TSpec SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => \facebook\thrift\test\HeapAllocated::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 8969067960420042186;
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
    return 'AdapterService_adaptedTypes_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.AdapterService_adaptedTypes_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.HeapAllocated",
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

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'success' => shape(
          'field' => dict[],
          'type' => dict[
            '\facebook\thrift\annotation\cpp\Adapter' => \facebook\thrift\annotation\cpp\Adapter::fromShape(
              shape(
                "name" => "::apache::thrift::test::MoveOnlyAdapter",
                "moveOnly" => true,
              )
            ),
          ],
        ),
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
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\HeapAllocated>($parsed['success']));
      $_tmp1 = \facebook\thrift\test\HeapAllocated::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class AdapterServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.AdapterService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "count",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.CountingStruct",
                    )
                  ),
                )
              ),
            )
          ),
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "adaptedTypes",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.HeapAllocated",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => \tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "module.HeapAllocated",
                          )
                        ),
                      )
                    ),
                    "name" => "arg",
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
              'module.CountingStruct' => \facebook\thrift\test\CountingStruct::getStructMetadata(),
              'module.HeapAllocated' => \facebook\thrift\test\HeapAllocated::getStructMetadata(),
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

  public static function getAllStructuredAnnotations()[write_props]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}


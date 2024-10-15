<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace test\fixtures\basic;

module hack.module.test;
/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): void;
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceAsyncClientIf extends RenamedServiceAsyncIf {
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * FooService
 */
internal trait RenamedServiceClientBase {
  require extends \ThriftClientBase;

  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public async function simple_rpc(): Awaitable<void> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \test\fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("FooService", "simple_rpc", $args);
    $currentseqid = $this->sendImplHelper($args, "simple_rpc", false, "FooService" );
    await $this->genAwaitResponse(\test\fixtures\basic\RenamedService_simple_rpc_result::class, "simple_rpc", true, $currentseqid, $rpc_options);
  }

}

class RenamedServiceAsyncClient extends \ThriftClientBase implements RenamedServiceAsyncClientIf {
  use RenamedServiceClientBase;

}

class RenamedServiceClient extends \ThriftClientBase implements RenamedServiceClientIf {
  use RenamedServiceClientBase;

  /* send and recv functions */
  public function send_simple_rpc(): int {
    $args = \test\fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
    return $this->sendImplHelper($args, "simple_rpc", false, "FooService" );
  }
  public function recv_simple_rpc(?int $expectedsequenceid = null): void {
    $this->recvImplHelper(\test\fixtures\basic\RenamedService_simple_rpc_result::class, "simple_rpc", true, $expectedsequenceid);
  }
}

abstract class RenamedServiceAsyncProcessorBase extends \ThriftAsyncProcessor {
  use \GetThriftServiceMetadata;
  abstract const type TThriftIf as RenamedServiceAsyncIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = RenamedServiceStaticMetadata::class;
  const string THRIFT_SVC_NAME = 'FooService';

  protected async function process_simple_rpc(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('simple_rpc');
    $reply_type = \TMessageType::REPLY;
    $args = $this->readHelper(\test\fixtures\basic\RenamedService_simple_rpc_args::class, $input, 'simple_rpc', $handler_ctx);
    $result = \test\fixtures\basic\RenamedService_simple_rpc_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\test\fixtures\basic\RenamedService', 'simple_rpc', $args);
      await $this->handler->simple_rpc();
      $this->eventHandler_->postExec($handler_ctx, 'simple_rpc', $result);
    } catch (\TException $exc) {
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $exc);
      if ($result->setException($exc)) {
        $reply_type = \TMessageType::EXCEPTION;
        $result = new \TApplicationException($exc->getMessage()."\n".$exc->getTraceAsString());
      }
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->writeHelper($result, 'simple_rpc', $seqid, $handler_ctx, $output, $reply_type);
  }
  protected async function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $this->process_getThriftServiceMetadataHelper($seqid, $input, $output, RenamedServiceStaticMetadata::class);
  }
}
class RenamedServiceAsyncProcessor extends RenamedServiceAsyncProcessorBase {
  const type TThriftIf = RenamedServiceAsyncIf;
}

abstract class RenamedServiceSyncProcessorBase extends \ThriftSyncProcessor {
  use \GetThriftServiceMetadata;
  abstract const type TThriftIf as RenamedServiceIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = RenamedServiceStaticMetadata::class;
  const string THRIFT_SVC_NAME = 'FooService';

  protected function process_simple_rpc(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('simple_rpc');
    $reply_type = \TMessageType::REPLY;
    $args = $this->readHelper(\test\fixtures\basic\RenamedService_simple_rpc_args::class, $input, 'simple_rpc', $handler_ctx);
    $result = \test\fixtures\basic\RenamedService_simple_rpc_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\test\fixtures\basic\RenamedService', 'simple_rpc', $args);
      $this->handler->simple_rpc();
      $this->eventHandler_->postExec($handler_ctx, 'simple_rpc', $result);
    } catch (\TException $exc) {
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $exc);
      if ($result->setException($exc)) {
        $reply_type = \TMessageType::EXCEPTION;
        $result = new \TApplicationException($exc->getMessage()."\n".$exc->getTraceAsString());
      }
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->writeHelper($result, 'simple_rpc', $seqid, $handler_ctx, $output, $reply_type);
  }
  protected function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $this->process_getThriftServiceMetadataHelper($seqid, $input, $output, RenamedServiceStaticMetadata::class);
  }
}
class RenamedServiceSyncProcessor extends RenamedServiceSyncProcessorBase {
  const type TThriftIf = RenamedServiceIf;
}
// For backwards compatibility
class RenamedServiceProcessor extends RenamedServiceSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class FooService_simple_rpc_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
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
    return 'FooService_simple_rpc_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.simple_rpc_args",
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

class FooService_simple_rpc_result extends \ThriftSyncStructWithoutResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
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
    return 'FooService_simple_rpc_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FooService_simple_rpc_result",
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

  }

}

class RenamedServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.FooService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "simple_rpc",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_VOID_TYPE,
                )
              ),
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
      'service' => dict[
        '\facebook\thrift\annotation\hack\Name' => \facebook\thrift\annotation\hack\Name::fromShape(
          shape(
            "name" => "RenamedService",
          )
        ),
      ],
      'functions' => dict[
      ],
    );
  }
}


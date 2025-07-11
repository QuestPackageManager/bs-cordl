#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JRaw.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JRaw)
namespace Newtonsoft::Json::Linq {
struct JRaw__CreateAsync_d__0;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace System::IO {
class StringWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JRaw;
}
namespace Newtonsoft::Json::Linq {
struct JRaw__CreateAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JRaw);
MARK_VAL_T(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JRaw/<CreateAsync>d__0
struct CORDL_TYPE JRaw__CreateAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3f1e9c8, size 0x5ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3f1efb4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JRaw__CreateAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JRaw*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "_sw_5__2", ty: "::System::IO::StringWriter*", modifiers: "", def_value: None }, CppParam { name: "_jsonWriter_5__3", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JRaw__CreateAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JRaw*> __t__builder,
                                   ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken, ::System::IO::StringWriter* _sw_5__2,
                                   ::Newtonsoft::Json::JsonTextWriter* _jsonWriter_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JRaw*> __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <sw>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::IO::StringWriter* _sw_5__2;

  /// @brief Field <jsonWriter>5__3, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* _jsonWriter_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, _sw_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, _jsonWriter_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.Linq.JValue
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JRaw
class CORDL_TYPE JRaw : public ::Newtonsoft::Json::Linq::JValue {
public:
  // Declarations
  using _CreateAsync_d__0 = ::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0;

  /// @brief Method CloneToken, addr 0x3f1e95c, size 0x6c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method Create, addr 0x3f1e5dc, size 0x380, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method CreateAsync, addr 0x3f1e4d0, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JRaw*>* CreateAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  static inline ::Newtonsoft::Json::Linq::JRaw* New_ctor(::Newtonsoft::Json::Linq::JRaw* other);

  static inline ::Newtonsoft::Json::Linq::JRaw* New_ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JRaw* New_ctor(::System::Object* rawJson);

  /// @brief Method .ctor, addr 0x3f1e5bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JRaw* other);

  /// @brief Method .ctor, addr 0x3f1e5c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JRaw* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method .ctor, addr 0x3f1e5d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* rawJson);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JRaw(JRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JRaw(JRaw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JRaw, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JRaw);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JRaw*, "Newtonsoft.Json.Linq", "JRaw");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JRaw__CreateAsync_d__0, "Newtonsoft.Json.Linq", "JRaw/<CreateAsync>d__0");

#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ExternalFileReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalFileReader)
namespace BGLib::UnityExtension {
struct ExternalFileReader__ExistsAsync_d__0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class ExternalFileReader;
}
namespace BGLib::UnityExtension {
struct ExternalFileReader__ExistsAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ExternalFileReader);
MARK_VAL_T(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// UnityEngine.Networking.UnityWebRequest::Result
namespace BGLib::UnityExtension {
// Is value type: true
// CS Name: BGLib.UnityExtension.ExternalFileReader/<ExistsAsync>d__0
struct CORDL_TYPE ExternalFileReader__ExistsAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22b6af0, size 0x714, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22b7390, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalFileReader__ExistsAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: None }]
  constexpr ExternalFileReader__ExistsAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW filePath,
                                                 ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17173 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief Field <webRequest>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, _webRequest_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, 0x38>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.ExternalFileReader
class CORDL_TYPE ExternalFileReader : public ::System::Object {
public:
  // Declarations
  using _ExistsAsync_d__0 = ::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0;

  /// @brief Method ExistsAsync, addr 0x22b69fc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* ExistsAsync(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalFileReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalFileReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalFileReader(ExternalFileReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalFileReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalFileReader(ExternalFileReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ExternalFileReader, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ExternalFileReader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ExternalFileReader*, "BGLib.UnityExtension", "ExternalFileReader");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0, "BGLib.UnityExtension", "ExternalFileReader/<ExistsAsync>d__0");

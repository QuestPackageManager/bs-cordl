#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestExtensions)
namespace BGLib::UnityExtension {
class __UnityWebRequestExtensions____c__DisplayClass0_0;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class UnityWebRequestExtensions;
}
namespace BGLib::UnityExtension {
class __UnityWebRequestExtensions____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::UnityWebRequestExtensions);
MARK_REF_PTR_T(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::UnityWebRequestExtensions::<>c__DisplayClass0_0*
class CORDL_TYPE __UnityWebRequestExtensions____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>* tcs;

  /// @brief Field webRequestOperation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_webRequestOperation, put = __cordl_internal_set_webRequestOperation))::UnityEngine::Networking::UnityWebRequestAsyncOperation* webRequestOperation;

  static inline ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0* New_ctor();

  /// @brief Method <GetAwaiter>g__SetResult|0, addr 0xe99c90, size 0xd0, virtual false, abstract: false, final false
  inline void _GetAwaiter_g__SetResult_0(::UnityEngine::AsyncOperation* _);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*& __cordl_internal_get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*> const& __cordl_internal_get_tcs() const;

  constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_webRequestOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const& __cordl_internal_get_webRequestOperation() const;

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>* value);

  constexpr void __cordl_internal_set_webRequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value);

  /// @brief Method .ctor, addr 0xe99c88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequestExtensions____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestExtensions____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityWebRequestExtensions____c__DisplayClass0_0(__UnityWebRequestExtensions____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestExtensions____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityWebRequestExtensions____c__DisplayClass0_0(__UnityWebRequestExtensions____c__DisplayClass0_0 const&) = delete;

  /// @brief Field webRequestOperation, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequestAsyncOperation* ___webRequestOperation;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0, ___webRequestOperation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0, ___tcs) == 0x18, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: BGLib.UnityExtension::UnityWebRequestExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::BGLib.UnityExtension::UnityWebRequestExtensions*
class CORDL_TYPE UnityWebRequestExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0;

  /// @brief Method GetAwaiter, addr 0xe99850, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>
  GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* webRequestOperation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestExtensions(UnityWebRequestExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestExtensions(UnityWebRequestExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::UnityWebRequestExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::UnityWebRequestExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::UnityWebRequestExtensions*, "BGLib.UnityExtension", "UnityWebRequestExtensions");
NEED_NO_BOX(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*, "BGLib.UnityExtension", "UnityWebRequestExtensions/<>c__DisplayClass0_0");

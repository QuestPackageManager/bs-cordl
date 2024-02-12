#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleExtensions)
namespace BGLib::UnityExtension {
struct __AssetBundleExtensions___ExistsAsync_d__0;
}
namespace BGLib::UnityExtension {
class __AssetBundleExtensions____c__DisplayClass1_0;
}
namespace BGLib::UnityExtension {
class __AssetBundleExtensions____c__DisplayClass2_0;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class AssetBundleExtensions;
}
namespace BGLib::UnityExtension {
class __AssetBundleExtensions____c__DisplayClass1_0;
}
namespace BGLib::UnityExtension {
class __AssetBundleExtensions____c__DisplayClass2_0;
}
namespace BGLib::UnityExtension {
struct __AssetBundleExtensions___ExistsAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::AssetBundleExtensions);
MARK_REF_PTR_T(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0);
MARK_REF_PTR_T(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0);
MARK_VAL_T(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0);
// Type: ::<ExistsAsync>d__0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), TypeDefinitionIndex(TypeDefinitionIndex(15736)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 5052 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 77 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15632)) CS Name: ::AssetBundleExtensions::<ExistsAsync>d__0
struct CORDL_TYPE __AssetBundleExtensions___ExistsAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe53440, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe53a50, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: None }]
  constexpr __AssetBundleExtensions___ExistsAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW assetBundlePath,
                                                       ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssetBundleExtensions___ExistsAsync_d__0();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field assetBundlePath, offset: 0x20, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field <webRequest>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, assetBundlePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, _webRequest_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15633))
// CS Name: ::AssetBundleExtensions::<>c__DisplayClass1_0*
class CORDL_TYPE __AssetBundleExtensions____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field loadAssetBundleTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loadAssetBundleTaskSource,
                      put = __cordl_internal_set_loadAssetBundleTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* loadAssetBundleTaskSource;

  /// @brief Field assetBundleCreateRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assetBundleCreateRequest, put = __cordl_internal_set_assetBundleCreateRequest))::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get_loadAssetBundleTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*> const&
  __cordl_internal_get_loadAssetBundleTaskSource() const;

  constexpr void __cordl_internal_set_loadAssetBundleTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* value);

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_assetBundleCreateRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const& __cordl_internal_get_assetBundleCreateRequest() const;

  constexpr void __cordl_internal_set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value);

  static inline ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0* New_ctor();

  /// @brief Method .ctor, addr 0xe532f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetAwaiter>b__0, addr 0xe53aa8, size 0x68, virtual false, abstract: false, final false
  inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation* _);

  // Ctor Parameters [CppParam { name: "", ty: "__AssetBundleExtensions____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AssetBundleExtensions____c__DisplayClass1_0(__AssetBundleExtensions____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AssetBundleExtensions____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AssetBundleExtensions____c__DisplayClass1_0(__AssetBundleExtensions____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssetBundleExtensions____c__DisplayClass1_0();

public:
  /// @brief Field loadAssetBundleTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* ___loadAssetBundleTaskSource;

  /// @brief Field assetBundleCreateRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AssetBundleCreateRequest* ___assetBundleCreateRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0, ___loadAssetBundleTaskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0, ___assetBundleCreateRequest) == 0x18, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15634))
// CS Name: ::AssetBundleExtensions::<>c__DisplayClass2_0*
class CORDL_TYPE __AssetBundleExtensions____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field loadResourceTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loadResourceTaskSource,
                      put = __cordl_internal_set_loadResourceTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* loadResourceTaskSource;

  /// @brief Field resourceRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceRequest, put = __cordl_internal_set_resourceRequest))::UnityEngine::ResourceRequest* resourceRequest;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_loadResourceTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_loadResourceTaskSource() const;

  constexpr void __cordl_internal_set_loadResourceTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_resourceRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceRequest*> const& __cordl_internal_get_resourceRequest() const;

  constexpr void __cordl_internal_set_resourceRequest(::UnityEngine::ResourceRequest* value);

  static inline ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor, addr 0xe53438, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetAwaiter>b__0, addr 0xe53b10, size 0x68, virtual false, abstract: false, final false
  inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation* _);

  // Ctor Parameters [CppParam { name: "", ty: "__AssetBundleExtensions____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AssetBundleExtensions____c__DisplayClass2_0(__AssetBundleExtensions____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AssetBundleExtensions____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AssetBundleExtensions____c__DisplayClass2_0(__AssetBundleExtensions____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssetBundleExtensions____c__DisplayClass2_0();

public:
  /// @brief Field loadResourceTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* ___loadResourceTaskSource;

  /// @brief Field resourceRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceRequest* ___resourceRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0, ___loadResourceTaskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0, ___resourceRequest) == 0x18, "Offset mismatch!");

} // namespace BGLib::UnityExtension
// Type: BGLib.UnityExtension::AssetBundleExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15635))
// CS Name: ::BGLib.UnityExtension::AssetBundleExtensions*
class CORDL_TYPE AssetBundleExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0;

  using __c__DisplayClass1_0 = ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0;

  using _ExistsAsync_d__0 = ::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0;

  /// @brief Method ExistsAsync, addr 0xe530c4, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* ExistsAsync(::StringW assetBundlePath);

  /// @brief Method GetAwaiter, addr 0xe531c0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> GetAwaiter(::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest);

  /// @brief Method GetAwaiter, addr 0xe53300, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> GetAwaiter(::UnityEngine::ResourceRequest* resourceRequest);

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleExtensions(AssetBundleExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleExtensions(AssetBundleExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AssetBundleExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::AssetBundleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AssetBundleExtensions*, "BGLib.UnityExtension", "AssetBundleExtensions");
NEED_NO_BOX(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*, "BGLib.UnityExtension", "AssetBundleExtensions/<>c__DisplayClass1_0");
NEED_NO_BOX(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*, "BGLib.UnityExtension", "AssetBundleExtensions/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0, "BGLib.UnityExtension", "AssetBundleExtensions/<ExistsAsync>d__0");

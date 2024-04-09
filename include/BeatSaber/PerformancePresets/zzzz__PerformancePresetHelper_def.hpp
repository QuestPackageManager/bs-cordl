#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformancePresetHelper)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___GetPerformancePresetAsync_d__12;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11;
}
namespace BeatSaber::PerformancePresets {
class __PerformancePresetHelper____c;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace BeatSaber::PerformancePresets {
class PerformancePresetHelper;
}
namespace BeatSaber::PerformancePresets {
class __PerformancePresetHelper____c;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___GetPerformancePresetAsync_d__12;
}
namespace BeatSaber::PerformancePresets {
struct __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::PerformancePresetHelper);
MARK_REF_PTR_T(::BeatSaber::PerformancePresets::__PerformancePresetHelper____c);
MARK_VAL_T(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13);
MARK_VAL_T(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12);
MARK_VAL_T(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11);
// Type: ::<IsPerformancePresetAvailableAsync>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::PerformancePresetHelper::<IsPerformancePresetAvailableAsync>d__11
struct CORDL_TYPE __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf73e3c, size 0x454, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf74290, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "presetKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>",
  // modifiers: "", def_value: None }]
  constexpr __PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW presetKey,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field presetKey, offset: 0x20, size: 0x8, def value: None
  ::StringW presetKey;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, presetKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::PerformancePresetHelper::<>c*
class CORDL_TYPE __PerformancePresetHelper____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BeatSaber::PerformancePresets::__PerformancePresetHelper____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Action_1<::UnityW<::UnityEngine::TextAsset>>* __9__12_0;

  static inline ::BeatSaber::PerformancePresets::__PerformancePresetHelper____c* New_ctor();

  /// @brief Method <GetPerformancePresetAsync>b__12_0, addr 0xf74354, size 0x4, virtual false, abstract: false, final false
  inline void _GetPerformancePresetAsync_b__12_0(::UnityEngine::TextAsset* _);

  /// @brief Method .ctor, addr 0xf7434c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::PerformancePresets::__PerformancePresetHelper____c* getStaticF___9();

  static inline ::System::Action_1<::UnityW<::UnityEngine::TextAsset>>* getStaticF___9__12_0();

  static inline void setStaticF___9(::BeatSaber::PerformancePresets::__PerformancePresetHelper____c* value);

  static inline void setStaticF___9__12_0(::System::Action_1<::UnityW<::UnityEngine::TextAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformancePresetHelper____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PerformancePresetHelper____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PerformancePresetHelper____c(__PerformancePresetHelper____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PerformancePresetHelper____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PerformancePresetHelper____c(__PerformancePresetHelper____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::__PerformancePresetHelper____c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::PerformancePresets
// Type: ::<GetPerformancePresetAsync>d__12
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::PerformancePresetHelper::<GetPerformancePresetAsync>d__12
struct CORDL_TYPE __PerformancePresetHelper___GetPerformancePresetAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf74358, size 0x6a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf74a00, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformancePresetHelper___GetPerformancePresetAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }, CppParam { name: "presetKey", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "_keys_5__2", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name:
  // "_handle_5__3", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>", modifiers:
  // "", def_value: None }]
  constexpr __PerformancePresetHelper___GetPerformancePresetAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::PerformancePresets::PerformancePreset*> __t__builder, ::StringW presetKey,
      ::System::Collections::Generic::List_1<::StringW>* _keys_5__2,
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*> _handle_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::PerformancePresets::PerformancePreset*> __t__builder;

  /// @brief Field presetKey, offset: 0x20, size: 0x8, def value: None
  ::StringW presetKey;

  /// @brief Field <keys>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* _keys_5__2;

  /// @brief Field <handle>5__3, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*> _handle_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, presetKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, _keys_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, _handle_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, __u__1) == 0x50, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
// Type: ::<GetDefaultPerformancePresetAsync>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::PerformancePresetHelper::<GetDefaultPerformancePresetAsync>d__13
struct CORDL_TYPE __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf74a58, size 0x70c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf75164, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: None }, CppParam
  // { name: "_resourceLocations_5__2", ty: "::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*", modifiers: "", def_value: None },
  // CppParam { name: "_presetKey_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }]
  constexpr __PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __t__builder,
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* _resourceLocations_5__2, ::StringW _presetKey_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __t__builder;

  /// @brief Field <resourceLocations>5__2, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* _resourceLocations_5__2;

  /// @brief Field <presetKey>5__3, offset: 0x28, size: 0x8, def value: None
  ::StringW _presetKey_5__3;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, _resourceLocations_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, _presetKey_5__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, __u__2) == 0x38, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
// Type: BeatSaber.PerformancePresets::PerformancePresetHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: false
// CS Name: ::BeatSaber.PerformancePresets::PerformancePresetHelper*
class CORDL_TYPE PerformancePresetHelper : public ::System::Object {
public:
  // Declarations
  using _GetDefaultPerformancePresetAsync_d__13 = ::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13;

  using _GetPerformancePresetAsync_d__12 = ::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12;

  using _IsPerformancePresetAvailableAsync_d__11 = ::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11;

  using __c = ::BeatSaber::PerformancePresets::__PerformancePresetHelper____c;

  /// @brief Method GetDefaultPerformancePresetAsync, addr 0xf73ca4, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>* GetDefaultPerformancePresetAsync();

  /// @brief Method GetHardwareCategory, addr 0xf73d88, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetHardwareCategory();

  /// @brief Method GetPerformancePresetAsync, addr 0xf73bac, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::BeatSaber::PerformancePresets::PerformancePreset*>* GetPerformancePresetAsync(::StringW presetKey);

  /// @brief Method IsPerformancePresetAvailableAsync, addr 0xf73ab4, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* IsPerformancePresetAvailableAsync(::StringW presetKey);

  static inline ::BeatSaber::PerformancePresets::PerformancePresetHelper* New_ctor();

  /// @brief Method .ctor, addr 0xf73e34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformancePresetHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformancePresetHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformancePresetHelper(PerformancePresetHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformancePresetHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformancePresetHelper(PerformancePresetHelper const&) = delete;

  /// @brief Field kCustomPresetKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCustomPresetKey{ u"Custom" };

  /// @brief Field kDefaultPresetKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultPresetKey{ u"PlatformDefaultPerformancePreset" };

  /// @brief Field kPS4HWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPS4HWDeviceCategoryName{ u"Orbis" };

  /// @brief Field kPS4ProHWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPS4ProHWDeviceCategoryName{ u"Neo" };

  /// @brief Field kPS5HWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPS5HWDeviceCategoryName{ u"Prospero" };

  /// @brief Field kPerformancePresetKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPerformancePresetKey{ u"PerformancePreset" };

  /// @brief Field kQuest2HWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kQuest2HWDeviceCategoryName{ u"Miramar" };

  /// @brief Field kQuest3HWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kQuest3HWDeviceCategoryName{ u"Stinson" };

  /// @brief Field kQuestHWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kQuestHWDeviceCategoryName{ u"Monterey" };

  /// @brief Field kQuestProHWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kQuestProHWDeviceCategoryName{ u"Arcata" };

  /// @brief Field kStandaloneHWDeviceCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandaloneHWDeviceCategoryName{ u"Standalone" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::PerformancePresetHelper, 0x10>, "Size mismatch!");

} // namespace BeatSaber::PerformancePresets
NEED_NO_BOX(::BeatSaber::PerformancePresets::PerformancePresetHelper);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::PerformancePresetHelper*, "BeatSaber.PerformancePresets", "PerformancePresetHelper");
NEED_NO_BOX(::BeatSaber::PerformancePresets::__PerformancePresetHelper____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::__PerformancePresetHelper____c*, "BeatSaber.PerformancePresets", "PerformancePresetHelper/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetDefaultPerformancePresetAsync_d__13, "BeatSaber.PerformancePresets",
                       "PerformancePresetHelper/<GetDefaultPerformancePresetAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::__PerformancePresetHelper___GetPerformancePresetAsync_d__12, "BeatSaber.PerformancePresets",
                       "PerformancePresetHelper/<GetPerformancePresetAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::__PerformancePresetHelper___IsPerformancePresetAvailableAsync_d__11, "BeatSaber.PerformancePresets",
                       "PerformancePresetHelper/<IsPerformancePresetAvailableAsync>d__11");

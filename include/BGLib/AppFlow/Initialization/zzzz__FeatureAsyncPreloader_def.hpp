#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/FeatureAsyncPreloader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureAsyncPreloader)
namespace BGLib::AppFlow::Initialization {
class AsyncPreloader;
}
namespace BGLib::AppFlow::Initialization {
struct __FeatureAsyncPreloader___PreloadAsync_d__1;
}
namespace BGLib::AppFlow::Initialization {
class __FeatureAsyncPreloader____c;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class FeatureAsyncPreloader;
}
namespace BGLib::AppFlow::Initialization {
class __FeatureAsyncPreloader____c;
}
namespace BGLib::AppFlow::Initialization {
struct __FeatureAsyncPreloader___PreloadAsync_d__1;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::FeatureAsyncPreloader);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: ::FeatureAsyncPreloader::<>c*
class CORDL_TYPE __FeatureAsyncPreloader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0,
                             put = setStaticF___9__1_0)) ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* __9__1_0;

  static inline ::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c* New_ctor();

  /// @brief Method <PreloadAsync>b__1_0, addr 0x2268e18, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _PreloadAsync_b__1_0(::BGLib::AppFlow::Initialization::AsyncPreloader* preloader);

  /// @brief Method .ctor, addr 0x2268e10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FeatureAsyncPreloader____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FeatureAsyncPreloader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FeatureAsyncPreloader____c(__FeatureAsyncPreloader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FeatureAsyncPreloader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FeatureAsyncPreloader____c(__FeatureAsyncPreloader____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17605 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c, 0x10>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<PreloadAsync>d__1
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: ::FeatureAsyncPreloader::<PreloadAsync>d__1
struct CORDL_TYPE __FeatureAsyncPreloader___PreloadAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2268e3c, size 0x8ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2269728, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FeatureAsyncPreloader___PreloadAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __FeatureAsyncPreloader___PreloadAsync_d__1(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*> __u__1;

  /// @brief Field <>u__2, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, __u__2) == 0x28, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::FeatureAsyncPreloader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: ::BGLib.AppFlow.Initialization::FeatureAsyncPreloader*
class CORDL_TYPE FeatureAsyncPreloader : public ::BGLib::AppFlow::Initialization::AsyncPreloader {
public:
  // Declarations
  using _PreloadAsync_d__1 = ::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1;

  using __c = ::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c;

  static inline ::BGLib::AppFlow::Initialization::FeatureAsyncPreloader* New_ctor();

  /// @brief Method PreloadAsync, addr 0x2268cf0, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method .ctor, addr 0x2268dac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureAsyncPreloader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureAsyncPreloader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureAsyncPreloader(FeatureAsyncPreloader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureAsyncPreloader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureAsyncPreloader(FeatureAsyncPreloader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17607 };

  /// @brief Field kFeatureAsyncPreloader offset 0xffffffff size 0x8
  static constexpr ::ConstString kFeatureAsyncPreloader{ u"FeatureAsyncPreloader" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::FeatureAsyncPreloader, 0x28>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::FeatureAsyncPreloader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::FeatureAsyncPreloader*, "BGLib.AppFlow.Initialization", "FeatureAsyncPreloader");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader____c*, "BGLib.AppFlow.Initialization", "FeatureAsyncPreloader/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__FeatureAsyncPreloader___PreloadAsync_d__1, "BGLib.AppFlow.Initialization", "FeatureAsyncPreloader/<PreloadAsync>d__1");

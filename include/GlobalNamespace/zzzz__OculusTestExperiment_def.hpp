#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusTestExperiment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusTestExperiment)
namespace GlobalNamespace {
class IExperimentData;
}
namespace GlobalNamespace {
class IExperimentModel;
}
namespace GlobalNamespace {
class OculusTestExperiment_ExperimentData;
}
namespace GlobalNamespace {
struct OculusTestExperiment__Init_d__3;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusTestExperiment;
}
namespace GlobalNamespace {
class OculusTestExperiment_ExperimentData;
}
namespace GlobalNamespace {
struct OculusTestExperiment__Init_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusTestExperiment);
MARK_REF_PTR_T(::GlobalNamespace::OculusTestExperiment_ExperimentData);
MARK_VAL_T(::GlobalNamespace::OculusTestExperiment__Init_d__3);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusTestExperiment/ExperimentData
class CORDL_TYPE OculusTestExperiment_ExperimentData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _experimentPlatformKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__experimentPlatformKey, put = __cordl_internal_set__experimentPlatformKey)) ::StringW _experimentPlatformKey;

  __declspec(property(get = get_experimentPlatformKey)) ::StringW experimentPlatformKey;

  /// @brief Convert operator to "::GlobalNamespace::IExperimentData"
  constexpr operator ::GlobalNamespace::IExperimentData*() noexcept;

  static inline ::GlobalNamespace::OculusTestExperiment_ExperimentData* New_ctor(::StringW experimentPlatformKey);

  constexpr ::StringW const& __cordl_internal_get__experimentPlatformKey() const;

  constexpr ::StringW& __cordl_internal_get__experimentPlatformKey();

  constexpr void __cordl_internal_set__experimentPlatformKey(::StringW value);

  /// @brief Method .ctor, addr 0x35e2228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW experimentPlatformKey);

  /// @brief Method get_experimentPlatformKey, addr 0x35e2220, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_experimentPlatformKey();

  /// @brief Convert to "::GlobalNamespace::IExperimentData"
  constexpr ::GlobalNamespace::IExperimentData* i___GlobalNamespace__IExperimentData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTestExperiment_ExperimentData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment_ExperimentData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTestExperiment_ExperimentData(OculusTestExperiment_ExperimentData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment_ExperimentData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTestExperiment_ExperimentData(OculusTestExperiment_ExperimentData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14824 };

  /// @brief Field _experimentPlatformKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ____experimentPlatformKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusTestExperiment_ExperimentData, ____experimentPlatformKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusTestExperiment_ExperimentData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusTestExperiment/<Init>d__3
struct CORDL_TYPE OculusTestExperiment__Init_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x35e2230, size 0x470, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x35e26a0, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTestExperiment__Init_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusTestExperiment*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr OculusTestExperiment__Init_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusTestExperiment* __4__this,
                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14825 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusTestExperiment* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusTestExperiment__Init_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusTestExperiment__Init_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusTestExperiment__Init_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusTestExperiment__Init_d__3, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusTestExperiment__Init_d__3, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusTestExperiment
class CORDL_TYPE OculusTestExperiment : public ::System::Object {
public:
  // Declarations
  using ExperimentData = ::GlobalNamespace::OculusTestExperiment_ExperimentData;

  using _Init_d__3 = ::GlobalNamespace::OculusTestExperiment__Init_d__3;

  /// @brief Field _experimentModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__experimentModel, put = __cordl_internal_set__experimentModel)) ::GlobalNamespace::IExperimentModel* _experimentModel;

  /// @brief Method Init, addr 0x35e2178, size 0xa4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::OculusTestExperiment* New_ctor();

  constexpr ::GlobalNamespace::IExperimentModel* const& __cordl_internal_get__experimentModel() const;

  constexpr ::GlobalNamespace::IExperimentModel*& __cordl_internal_get__experimentModel();

  constexpr void __cordl_internal_set__experimentModel(::GlobalNamespace::IExperimentModel* value);

  /// @brief Method .ctor, addr 0x35e221c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTestExperiment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTestExperiment(OculusTestExperiment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTestExperiment(OculusTestExperiment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14826 };

  /// @brief Field kIsInTest1Key offset 0xffffffff size 0x8
  static constexpr ::ConstString kIsInTest1Key{ u"beatsaber_experiments:test_parameter" };

  /// @brief Field _experimentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IExperimentModel* ____experimentModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusTestExperiment, ____experimentModel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusTestExperiment, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusTestExperiment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment*, "", "OculusTestExperiment");
NEED_NO_BOX(::GlobalNamespace::OculusTestExperiment_ExperimentData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment_ExperimentData*, "", "OculusTestExperiment/ExperimentData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment__Init_d__3, "", "OculusTestExperiment/<Init>d__3");

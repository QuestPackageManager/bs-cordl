#pragma once
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
class __OculusTestExperiment__ExperimentData;
}
namespace GlobalNamespace {
struct __OculusTestExperiment___Init_d__3;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusTestExperiment;
}
namespace GlobalNamespace {
class __OculusTestExperiment__ExperimentData;
}
namespace GlobalNamespace {
struct __OculusTestExperiment___Init_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusTestExperiment);
MARK_REF_PTR_T(::GlobalNamespace::__OculusTestExperiment__ExperimentData);
MARK_VAL_T(::GlobalNamespace::__OculusTestExperiment___Init_d__3);
// Type: ::ExperimentData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10642))
// CS Name: ::OculusTestExperiment::ExperimentData*
class CORDL_TYPE __OculusTestExperiment__ExperimentData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _experimentPlatformKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__experimentPlatformKey, put = __cordl_internal_set__experimentPlatformKey))::StringW _experimentPlatformKey;

  __declspec(property(get = get_experimentPlatformKey))::StringW experimentPlatformKey;

  /// @brief Convert operator to "::GlobalNamespace::IExperimentData"
  constexpr operator ::GlobalNamespace::IExperimentData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IExperimentData"
  constexpr ::GlobalNamespace::IExperimentData* i___GlobalNamespace__IExperimentData() noexcept;

  constexpr ::StringW& __cordl_internal_get__experimentPlatformKey();

  constexpr ::StringW const& __cordl_internal_get__experimentPlatformKey() const;

  constexpr void __cordl_internal_set__experimentPlatformKey(::StringW value);

  /// @brief Method get_experimentPlatformKey, addr 0x1267370, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_experimentPlatformKey();

  static inline ::GlobalNamespace::__OculusTestExperiment__ExperimentData* New_ctor(::StringW experimentPlatformKey);

  /// @brief Method .ctor, addr 0x1267378, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW experimentPlatformKey);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusTestExperiment__ExperimentData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusTestExperiment__ExperimentData(__OculusTestExperiment__ExperimentData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusTestExperiment__ExperimentData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusTestExperiment__ExperimentData(__OculusTestExperiment__ExperimentData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusTestExperiment__ExperimentData();

public:
  /// @brief Field _experimentPlatformKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ____experimentPlatformKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusTestExperiment__ExperimentData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusTestExperiment__ExperimentData, ____experimentPlatformKey) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Init>d__3
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 77
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10643)) CS Name: ::OculusTestExperiment::<Init>d__3
struct CORDL_TYPE __OculusTestExperiment___Init_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x12673a0, size 0x470, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1267810, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusTestExperiment*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusTestExperiment___Init_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::OculusTestExperiment* __4__this,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusTestExperiment___Init_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusTestExperiment* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusTestExperiment___Init_d__3, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusTestExperiment___Init_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusTestExperiment___Init_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusTestExperiment___Init_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusTestExperiment___Init_d__3, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusTestExperiment
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10644))
// CS Name: ::OculusTestExperiment*
class CORDL_TYPE OculusTestExperiment : public ::System::Object {
public:
  // Declarations
  using _Init_d__3 = ::GlobalNamespace::__OculusTestExperiment___Init_d__3;

  using ExperimentData = ::GlobalNamespace::__OculusTestExperiment__ExperimentData;

  /// @brief Field _experimentModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__experimentModel, put = __cordl_internal_set__experimentModel))::GlobalNamespace::IExperimentModel* _experimentModel;

  constexpr ::GlobalNamespace::IExperimentModel*& __cordl_internal_get__experimentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IExperimentModel*> const& __cordl_internal_get__experimentModel() const;

  constexpr void __cordl_internal_set__experimentModel(::GlobalNamespace::IExperimentModel* value);

  /// @brief Method Init, addr 0x12672d4, size 0x94, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::OculusTestExperiment* New_ctor();

  /// @brief Method .ctor, addr 0x1267368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTestExperiment(OculusTestExperiment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTestExperiment(OculusTestExperiment const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTestExperiment();

public:
  /// @brief Field _experimentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IExperimentModel* ____experimentModel;

  /// @brief Field kIsInTest1Key offset 0xffffffff size 0x8
  static constexpr ::ConstString kIsInTest1Key{ u"beatsaber_experiments:test_parameter" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusTestExperiment, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusTestExperiment, ____experimentModel) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusTestExperiment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment*, "", "OculusTestExperiment");
NEED_NO_BOX(::GlobalNamespace::__OculusTestExperiment__ExperimentData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusTestExperiment__ExperimentData*, "", "OculusTestExperiment/ExperimentData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusTestExperiment___Init_d__3, "", "OculusTestExperiment/<Init>d__3");

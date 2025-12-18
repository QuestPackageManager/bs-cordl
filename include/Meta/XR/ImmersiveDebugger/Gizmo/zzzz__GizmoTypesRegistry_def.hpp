#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoTypesRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GizmoTypesRegistry)
namespace Meta::XR::ImmersiveDebugger::Gizmo {
struct GizmoTypeInfo;
}
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoTypesRegistry___c;
}
namespace Meta::XR::ImmersiveDebugger {
struct DebugGizmoType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoTypesRegistry;
}
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoTypesRegistry___c;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry/<>c
class CORDL_TYPE GizmoTypesRegistry___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Action_1<::System::Object*>* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::System::Action_1<::System::Object*>* __9__3_1;

  /// @brief Field <>9__3_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_2, put = setStaticF___9__3_2)) ::System::Action_1<::System::Object*>* __9__3_2;

  /// @brief Field <>9__3_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_3, put = setStaticF___9__3_3)) ::System::Action_1<::System::Object*>* __9__3_3;

  /// @brief Field <>9__3_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_4, put = setStaticF___9__3_4)) ::System::Action_1<::System::Object*>* __9__3_4;

  /// @brief Field <>9__3_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_5, put = setStaticF___9__3_5)) ::System::Action_1<::System::Object*>* __9__3_5;

  /// @brief Field <>9__3_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_6, put = setStaticF___9__3_6)) ::System::Action_1<::System::Object*>* __9__3_6;

  /// @brief Field <>9__3_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_7, put = setStaticF___9__3_7)) ::System::Action_1<::System::Object*>* __9__3_7;

  /// @brief Field <>9__3_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_8, put = setStaticF___9__3_8)) ::System::Action_1<::System::Object*>* __9__3_8;

  /// @brief Field <>9__3_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_9, put = setStaticF___9__3_9)) ::System::Action_1<::System::Object*>* __9__3_9;

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* New_ctor();

  /// @brief Method <InitGizmos>b__3_0, addr 0x58c0e8c, size 0xa8, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_0(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_1, addr 0x58c0f34, size 0xb4, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_1(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_2, addr 0x58c0fe8, size 0xbc, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_2(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_3, addr 0x58c10a4, size 0xe8, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_3(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_4, addr 0x58c118c, size 0x11c, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_4(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_5, addr 0x58c12a8, size 0x118, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_5(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_6, addr 0x58c13c0, size 0x10c, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_6(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_7, addr 0x58c14cc, size 0x104, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_7(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_8, addr 0x58c15d0, size 0x134, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_8(::System::Object* dataSource);

  /// @brief Method <InitGizmos>b__3_9, addr 0x58c1704, size 0x134, virtual false, abstract: false, final false
  inline void _InitGizmos_b__3_9(::System::Object* dataSource);

  /// @brief Method .ctor, addr 0x58c0e88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_0();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_1();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_2();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_3();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_4();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_5();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_6();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_7();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_8();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_9();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c* value);

  static inline void setStaticF___9__3_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_1(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_2(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_3(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_4(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_5(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_6(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_7(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_8(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__3_9(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoTypesRegistry___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoTypesRegistry___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoTypesRegistry___c(GizmoTypesRegistry___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoTypesRegistry___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoTypesRegistry___c(GizmoTypesRegistry___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry
class CORDL_TYPE GizmoTypesRegistry : public ::System::Object {
public:
  // Declarations
  using __c = ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c;

  /// @brief Field GizmoTypeInfos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GizmoTypeInfos,
                      put = setStaticF_GizmoTypeInfos)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::System::Type*>,
                                                                                                     ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>* GizmoTypeInfos;

  /// @brief Method Init, addr 0x58c0328, size 0x88, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method InitGizmos, addr 0x58c0474, size 0x90c, virtual false, abstract: false, final false
  static inline void InitGizmos();

  /// @brief Method IsValidDataTypeForGizmoType, addr 0x58b4268, size 0x178, virtual false, abstract: false, final false
  static inline bool IsValidDataTypeForGizmoType(::System::Type* type, ::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType);

  /// @brief Method RegisterGizmoType, addr 0x58c03b0, size 0xc4, virtual false, abstract: false, final false
  static inline void RegisterGizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType, ::System::Type* dataSourceType, ::System::Action_1<::System::Object*>* renderDelegate);

  /// @brief Method RenderGizmo, addr 0x58bfd70, size 0xf8, virtual false, abstract: false, final false
  static inline void RenderGizmo(::Meta::XR::ImmersiveDebugger::DebugGizmoType type, ::System::Object* dataSource);

  static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::System::Type*>,
                                                             ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>*
  getStaticF_GizmoTypeInfos();

  static inline void setStaticF_GizmoTypeInfos(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::System::Type*>, ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoTypesRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoTypesRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoTypesRegistry(GizmoTypesRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoTypesRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoTypesRegistry(GizmoTypesRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry*, "Meta.XR.ImmersiveDebugger.Gizmo", "GizmoTypesRegistry");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypesRegistry___c*, "Meta.XR.ImmersiveDebugger.Gizmo", "GizmoTypesRegistry/<>c");

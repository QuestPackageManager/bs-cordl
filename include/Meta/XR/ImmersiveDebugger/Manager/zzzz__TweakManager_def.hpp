#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/TweakManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TweakManager)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class ManagerUtils_RegisterMember_1;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakManager___c;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakManager___c;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakManager);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakManager/<>c
class CORDL_TYPE TweakManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>* __9__4_1;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c* New_ctor();

  /// @brief Method <ProcessType>b__4_0, addr 0x58b9404, size 0x88, virtual false, abstract: false, final false
  inline bool _ProcessType_b__4_0(::System::Reflection::MemberInfo* info, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method <ProcessType>b__4_1, addr 0x58b948c, size 0x2a4, virtual false, abstract: false, final false
  inline void _ProcessType_b__4_1(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, ::System::Reflection::MemberInfo* member,
                                  ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance);

  /// @brief Method .ctor, addr 0x58b9400, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c* getStaticF___9();

  static inline ::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* getStaticF___9__4_0();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>* getStaticF___9__4_1();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c* value);

  static inline void setStaticF___9__4_0(::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* value);

  static inline void setStaticF___9__4_1(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakManager___c(TweakManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakManager___c(TweakManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18428 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakManager
class CORDL_TYPE TweakManager : public ::System::Object {
public:
  // Declarations
  using __c = ::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c;

  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  /// @brief Field TweaksDict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TweaksDict, put = __cordl_internal_set_TweaksDict)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* TweaksDict;

  /// @brief Field _instanceCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceCache, put = __cordl_internal_set__instanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* _instanceCache;

  /// @brief Field _uiPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uiPanel, put = __cordl_internal_set__uiPanel)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* _uiPanel;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept;

  /// @brief Method GetCountPerType, addr 0x58b927c, size 0x98, virtual true, abstract: false, final true
  inline int32_t GetCountPerType(::System::Type* type);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakManager* New_ctor();

  /// @brief Method ProcessType, addr 0x58b8d84, size 0x444, virtual true, abstract: false, final true
  inline void ProcessType(::System::Type* type);

  /// @brief Method ProcessTypeFromHierarchy, addr 0x58b9200, size 0x38, virtual true, abstract: false, final true
  inline void ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method ProcessTypeFromInspector, addr 0x58b91c8, size 0x38, virtual true, abstract: false, final true
  inline void ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle, ::System::Reflection::MemberInfo* memberInfo,
                                       ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute);

  /// @brief Method Setup, addr 0x58b8d7c, size 0x8, virtual true, abstract: false, final true
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache);

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* const&
  __cordl_internal_get_TweaksDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>*&
  __cordl_internal_get_TweaksDict();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get__instanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get__instanceCache();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& __cordl_internal_get__uiPanel() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& __cordl_internal_get__uiPanel();

  constexpr void __cordl_internal_set_TweaksDict(
      ::System::Collections::Generic::Dictionary_2<
          ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* value);

  constexpr void __cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

  /// @brief Method .ctor, addr 0x58b9314, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0x58b9238, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_TelemetryAnnotation();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakManager(TweakManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakManager(TweakManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18429 };

  /// @brief Field TweaksDict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* ___TweaksDict;

  /// @brief Field _uiPanel, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* ____uiPanel;

  /// @brief Field _instanceCache, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ____instanceCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::TweakManager, ___TweaksDict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::TweakManager, ____uiPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::TweakManager, ____instanceCache) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakManager, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakManager*, "Meta.XR.ImmersiveDebugger.Manager", "TweakManager");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakManager___c*, "Meta.XR.ImmersiveDebugger.Manager", "TweakManager/<>c");

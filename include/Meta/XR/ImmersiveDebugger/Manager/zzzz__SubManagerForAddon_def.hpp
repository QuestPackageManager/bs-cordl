#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/SubManagerForAddon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubManagerForAddon)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
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
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class SubManagerForAddon;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon
class CORDL_TYPE SubManagerForAddon : public ::System::Object {
public:
  // Declarations
  /// @brief Field InstanceCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InstanceCache, put = __cordl_internal_set_InstanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* InstanceCache;

  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__dictionary,
      put = __cordl_internal_set__dictionary)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*>* _dictionary;

  /// @brief Field _uiPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uiPanel, put = __cordl_internal_set__uiPanel)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* _uiPanel;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept;

  /// @brief Method GetCountPerType, addr 0x58b797c, size 0x98, virtual true, abstract: false, final true
  inline int32_t GetCountPerType(::System::Type* type);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon* New_ctor();

  /// @brief Method ProcessType, addr 0x58b72d4, size 0x38, virtual true, abstract: false, final true
  inline void ProcessType(::System::Type* type);

  /// @brief Method ProcessTypeFromHierarchy, addr 0x58b762c, size 0x350, virtual true, abstract: false, final true
  inline void ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method ProcessTypeFromInspector, addr 0x58b730c, size 0x320, virtual true, abstract: false, final true
  inline void ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle, ::System::Reflection::MemberInfo* memberInfo,
                                       ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute);

  /// @brief Method RegisterSpecialisedWidget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member, ::System::Reflection::MemberInfo* memberInfo,
                                        ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  /// @brief Method Setup, addr 0x58b72cc, size 0x8, virtual true, abstract: false, final true
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache);

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get_InstanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get_InstanceCache();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*>* const& __cordl_internal_get__dictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*>*& __cordl_internal_get__dictionary();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& __cordl_internal_get__uiPanel() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& __cordl_internal_get__uiPanel();

  constexpr void __cordl_internal_set_InstanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*>* value);

  constexpr void __cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

  /// @brief Method .ctor, addr 0x58b7a14, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_TelemetryAnnotation();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubManagerForAddon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubManagerForAddon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubManagerForAddon(SubManagerForAddon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubManagerForAddon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubManagerForAddon(SubManagerForAddon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18422 };

  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*>* ____dictionary;

  /// @brief Field _uiPanel, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* ____uiPanel;

  /// @brief Field InstanceCache, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ___InstanceCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon, ____dictionary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon, ____uiPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon, ___InstanceCache) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon*, "Meta.XR.ImmersiveDebugger.Manager", "SubManagerForAddon");

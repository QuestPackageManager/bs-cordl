#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeUpdater)
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class __VisualTreeUpdater__UpdaterArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
// Type: ::UpdaterArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6751))
// CS Name: ::VisualTreeUpdater::UpdaterArray*
class CORDL_TYPE __VisualTreeUpdater__UpdaterArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_VisualTreeUpdaters, offset 0x10, size 0x8
  __declspec(property(get = __get_m_VisualTreeUpdaters,
                      put = __set_m_VisualTreeUpdaters))::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> m_VisualTreeUpdaters;

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  __declspec(property(get = get_Item))::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>& __get_m_VisualTreeUpdaters();

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> const& __get_m_VisualTreeUpdaters() const;

  constexpr void __set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> value);

  static inline ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* New_ctor();

  /// @brief Method .ctor addr 0x2db2524 size 0x5c virtual false final false
  inline void _ctor();

  /// @brief Method set_Item addr 0x2db2b40 size 0x64 virtual false final false
  inline void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater* value);

  /// @brief Method get_Item addr 0x2db2a10 size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method get_Item addr 0x2db2788 size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeUpdater__UpdaterArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeUpdater__UpdaterArray(__VisualTreeUpdater__UpdaterArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeUpdater__UpdaterArray();

public:
  /// @brief Field m_VisualTreeUpdaters, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> ___m_VisualTreeUpdaters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6752))
// CS Name: ::UnityEngine.UIElements::VisualTreeUpdater*
class CORDL_TYPE VisualTreeUpdater : public ::System::Object {
public:
  // Declarations
  using UpdaterArray = ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Panel, put = __set_m_Panel))::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  /// @brief Field m_UpdaterArray, offset 0x18, size 0x8
  __declspec(property(get = __get_m_UpdaterArray, put = __set_m_UpdaterArray))::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* m_UpdaterArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __get_m_Panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __get_m_Panel() const;

  constexpr void __set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*& __get_m_UpdaterArray();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*> const& __get_m_UpdaterArray() const;

  constexpr void __set_m_UpdaterArray(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* value);

  static inline ::UnityEngine::UIElements::VisualTreeUpdater* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method .ctor addr 0x2db24a8 size 0x7c virtual false final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method Dispose addr 0x2db26bc size 0xcc virtual true final true
  inline void Dispose();

  /// @brief Method UpdateVisualTreePhase addr 0x2db27b8 size 0x258 virtual false final false
  inline void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method OnVersionChanged addr 0x2db2a40 size 0xe8 virtual false final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method SetUpdater addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method GetUpdater addr 0x2db2b28 size 0x18 virtual false final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method SetDefaultUpdaters addr 0x2db2580 size 0x13c virtual false final false
  inline void SetDefaultUpdaters();

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeUpdater(VisualTreeUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeUpdater(VisualTreeUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeUpdater();

public:
  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  /// @brief Field m_UpdaterArray, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray* ___m_UpdaterArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdater, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater*, "UnityEngine.UIElements", "VisualTreeUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeUpdater__UpdaterArray*, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");

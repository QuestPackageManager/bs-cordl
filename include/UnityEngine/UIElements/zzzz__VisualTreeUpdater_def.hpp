#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeUpdater)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class VisualTreeUpdater_UpdaterArray;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class VisualTreeUpdater_UpdaterArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
class CORDL_TYPE VisualTreeUpdater_UpdaterArray : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::UIElements::IVisualTreeUpdater* Item[];

  /// @brief Field m_VisualTreeUpdaters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeUpdaters,
                      put = __cordl_internal_set_m_VisualTreeUpdaters)) ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>
      m_VisualTreeUpdaters;

  static inline ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* New_ctor();

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> const& __cordl_internal_get_m_VisualTreeUpdaters() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*>& __cordl_internal_get_m_VisualTreeUpdaters();

  constexpr void __cordl_internal_set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> value);

  /// @brief Method .ctor, addr 0x499f0d0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x499f334, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x499f530, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method set_Item, addr 0x499f660, size 0x64, virtual false, abstract: false, final false
  inline void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeUpdater_UpdaterArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater_UpdaterArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeUpdater_UpdaterArray(VisualTreeUpdater_UpdaterArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater_UpdaterArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeUpdater_UpdaterArray(VisualTreeUpdater_UpdaterArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6346 };

  /// @brief Field m_VisualTreeUpdaters, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*, ::Array<::UnityEngine::UIElements::IVisualTreeUpdater*>*> ___m_VisualTreeUpdaters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray, ___m_VisualTreeUpdaters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeUpdater
class CORDL_TYPE VisualTreeUpdater : public ::System::Object {
public:
  // Declarations
  using UpdaterArray = ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  /// @brief Field m_UpdaterArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdaterArray, put = __cordl_internal_set_m_UpdaterArray)) ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* m_UpdaterArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x499f268, size 0xcc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetUpdater, addr 0x499f648, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  static inline ::UnityEngine::UIElements::VisualTreeUpdater* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method OnVersionChanged, addr 0x499f560, size 0xe8, virtual false, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method SetDefaultUpdaters, addr 0x499f12c, size 0x13c, virtual false, abstract: false, final false
  inline void SetDefaultUpdaters();

  /// @brief Method SetUpdater, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  /// @brief Method UpdateVisualTreePhase, addr 0x499f364, size 0x1cc, virtual false, abstract: false, final false
  inline void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* const& __cordl_internal_get_m_UpdaterArray() const;

  constexpr ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*& __cordl_internal_get_m_UpdaterArray();

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_m_UpdaterArray(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* value);

  /// @brief Method .ctor, addr 0x499f05c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeUpdater(VisualTreeUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeUpdater(VisualTreeUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6347 };

  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  /// @brief Field m_UpdaterArray, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* ___m_UpdaterArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdater, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdater, ___m_UpdaterArray) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdater, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater*, "UnityEngine.UIElements", "VisualTreeUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultGroupManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultGroupManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultGroupManager);
// Type: UnityEngine.UIElements::DefaultGroupManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6861))
// CS Name: ::UnityEngine.UIElements::DefaultGroupManager*
class CORDL_TYPE DefaultGroupManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_GroupOptions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GroupOptions,
                      put = __cordl_internal_set_m_GroupOptions))::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* m_GroupOptions;

  /// @brief Field m_SelectedOption, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedOption, put = __cordl_internal_set_m_SelectedOption))::UnityEngine::UIElements::IGroupBoxOption* m_SelectedOption;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupManager"
  constexpr operator ::UnityEngine::UIElements::IGroupManager*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IGroupManager"
  constexpr ::UnityEngine::UIElements::IGroupManager* i___UnityEngine__UIElements__IGroupManager() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*& __cordl_internal_get_m_GroupOptions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*> const& __cordl_internal_get_m_GroupOptions() const;

  constexpr void __cordl_internal_set_m_GroupOptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* value);

  constexpr ::UnityEngine::UIElements::IGroupBoxOption*& __cordl_internal_get_m_SelectedOption();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IGroupBoxOption*> const& __cordl_internal_get_m_SelectedOption() const;

  constexpr void __cordl_internal_set_m_SelectedOption(::UnityEngine::UIElements::IGroupBoxOption* value);

  /// @brief Method OnOptionSelectionChanged, addr 0x2dc839c, size 0x1d0, virtual true, abstract: false, final true
  inline void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption);

  /// @brief Method RegisterOption, addr 0x2dc856c, size 0xd4, virtual true, abstract: false, final true
  inline void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnregisterOption, addr 0x2dc8640, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);

  static inline ::UnityEngine::UIElements::DefaultGroupManager* New_ctor();

  /// @brief Method .ctor, addr 0x2dc8698, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultGroupManager(DefaultGroupManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultGroupManager(DefaultGroupManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultGroupManager();

public:
  /// @brief Field m_GroupOptions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* ___m_GroupOptions;

  /// @brief Field m_SelectedOption, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::IGroupBoxOption* ___m_SelectedOption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultGroupManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultGroupManager, ___m_GroupOptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultGroupManager, ___m_SelectedOption) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DefaultGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultGroupManager*, "UnityEngine.UIElements", "DefaultGroupManager");

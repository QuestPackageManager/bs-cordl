#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/IEventProviderImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventProviderImpl)
// Forward declare root types
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::IEventProviderImpl);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.IEventProviderImpl
class CORDL_TYPE IEventProviderImpl {
public:
  // Declarations
  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method OnFocusChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFocusChanged(bool focus);

  /// @brief Method Shutdown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Shutdown();

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "IEventProviderImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventProviderImpl(IEventProviderImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::IEventProviderImpl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::IEventProviderImpl*, "UnityEngine.InputForUI", "IEventProviderImpl");

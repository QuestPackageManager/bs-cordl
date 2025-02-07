#pragma once
// IWYU pragma private; include "UnityEngine/WaitUntil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitUntil)
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitUntil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitUntil);
// Dependencies UnityEngine.CustomYieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WaitUntil
class CORDL_TYPE WaitUntil : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  /// @brief Field m_Predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Predicate, put = __cordl_internal_set_m_Predicate)) ::System::Func_1<bool>* m_Predicate;

  static inline ::UnityEngine::WaitUntil* New_ctor(::System::Func_1<bool>* predicate);

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_m_Predicate() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_Predicate();

  constexpr void __cordl_internal_set_m_Predicate(::System::Func_1<bool>* value);

  /// @brief Method .ctor, addr 0x48b6d98, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<bool>* predicate);

  /// @brief Method get_keepWaiting, addr 0x48b6d68, size 0x30, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitUntil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitUntil(WaitUntil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitUntil(WaitUntil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10925 };

  /// @brief Field m_Predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_Predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WaitUntil, ___m_Predicate) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitUntil, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitUntil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitUntil*, "UnityEngine", "WaitUntil");

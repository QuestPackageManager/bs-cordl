#pragma once
// IWYU pragma private; include "UnityEngine/Coroutine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(Coroutine)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class Coroutine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Coroutine);
// Dependencies System.IntPtr, UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Coroutine
class CORDL_TYPE Coroutine : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method Finalize, addr 0x48aa660, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Coroutine* New_ctor();

  /// @brief Method ReleaseCoroutine, addr 0x48aa71c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseCoroutine(::System::IntPtr ptr);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48aa658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Coroutine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Coroutine(Coroutine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Coroutine(Coroutine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10879 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Coroutine, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Coroutine, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine*, "UnityEngine", "Coroutine");

#pragma once
// IWYU pragma private; include "UnityEngine/Coroutine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cstdint>
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
// Type: UnityEngine::Coroutine
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Coroutine*
class CORDL_TYPE Coroutine : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr))::System::IntPtr m_Ptr;

  /// @brief Method Finalize, addr 0x344992c, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Coroutine* New_ctor();

  /// @brief Method ReleaseCoroutine, addr 0x34499e8, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseCoroutine(::System::IntPtr ptr);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3449924, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Coroutine, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Coroutine, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine*, "UnityEngine", "Coroutine");

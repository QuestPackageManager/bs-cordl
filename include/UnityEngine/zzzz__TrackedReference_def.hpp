#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedReference)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class TrackedReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TrackedReference);
// Type: UnityEngine::TrackedReference
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TrackedReference*
class CORDL_TYPE TrackedReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Method Equals, addr 0x2e1f5fc, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x2e1f67c, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TrackedReference* New_ctor();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x2e1f548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Equality, addr 0x2e1f550, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y);

  /// @brief Method op_Implicit, addr 0x2e1f688, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::TrackedReference* exists);

  /// @brief Method op_Inequality, addr 0x2e1f5e4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedReference(TrackedReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedReference(TrackedReference const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TrackedReference, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TrackedReference, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TrackedReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TrackedReference*, "UnityEngine", "TrackedReference");

#pragma once
// IWYU pragma private; include "UnityEngine/TrackedReference.hpp"
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
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TrackedReference
class CORDL_TYPE TrackedReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method Equals, addr 0x48b09d8, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x48b0a58, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TrackedReference* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48b0964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Equality, addr 0x48b096c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y);

  /// @brief Method op_Implicit, addr 0x48b0a64, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::TrackedReference* exists);

  /// @brief Method op_Inequality, addr 0x48b09c0, size 0x18, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10913 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TrackedReference, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TrackedReference, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TrackedReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TrackedReference*, "UnityEngine", "TrackedReference");

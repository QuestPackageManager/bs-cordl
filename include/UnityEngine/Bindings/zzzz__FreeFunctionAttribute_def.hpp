#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/FreeFunctionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FreeFunctionAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class FreeFunctionAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::FreeFunctionAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::FreeFunctionAttribute*, "UnityEngine.Bindings", "FreeFunctionAttribute");
// Dependencies UnityEngine.Bindings.NativeMethodAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.FreeFunctionAttribute
class CORDL_TYPE FreeFunctionAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor();

  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW name);

  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW name, bool isThreadSafe);

  /// @brief Method .ctor, addr 0x6bb2f4c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6bb2f58, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6bb2f74, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool isThreadSafe);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeFunctionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeFunctionAttribute(FreeFunctionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeFunctionAttribute(FreeFunctionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Bindings::FreeFunctionAttribute) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Bindings

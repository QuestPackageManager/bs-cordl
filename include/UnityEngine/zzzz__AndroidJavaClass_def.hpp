#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaClass)
// Forward declare root types
namespace UnityEngine {
class AndroidJavaClass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaClass);
// Type: UnityEngine::AndroidJavaClass
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14913))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14914))
// CS Name: ::UnityEngine::AndroidJavaClass*
class CORDL_TYPE AndroidJavaClass : public ::UnityEngine::AndroidJavaObject {
public:
  // Declarations
  static inline ::UnityEngine::AndroidJavaClass* New_ctor(::StringW className);

  /// @brief Method .ctor, addr 0x2c841d0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW className);

  /// @brief Method _AndroidJavaClass, addr 0x2c87824, size 0xc0, virtual false, abstract: false, final false
  inline void _AndroidJavaClass(::StringW className);

  static inline ::UnityEngine::AndroidJavaClass* New_ctor(void* jclass);

  /// @brief Method .ctor, addr 0x2c87038, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(void* jclass);

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaClass(AndroidJavaClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaClass(AndroidJavaClass const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaClass();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaClass, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaClass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");

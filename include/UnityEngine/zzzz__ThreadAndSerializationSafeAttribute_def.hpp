#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ThreadAndSerializationSafeAttribute)
// Forward declare root types
namespace UnityEngine {
class ThreadAndSerializationSafeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ThreadAndSerializationSafeAttribute);
// Type: UnityEngine::ThreadAndSerializationSafeAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ThreadAndSerializationSafeAttribute*
class CORDL_TYPE ThreadAndSerializationSafeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ThreadAndSerializationSafeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x346f5a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadAndSerializationSafeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ThreadAndSerializationSafeAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ThreadAndSerializationSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ThreadAndSerializationSafeAttribute*, "UnityEngine", "ThreadAndSerializationSafeAttribute");

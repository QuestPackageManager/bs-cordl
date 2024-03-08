#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FormerlySerializedAsAttribute)
// Forward declare root types
namespace UnityEngine::Serialization {
class FormerlySerializedAsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Serialization::FormerlySerializedAsAttribute);
// Type: UnityEngine.Serialization::FormerlySerializedAsAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Serialization {
// Is value type: false
// CS Name: ::UnityEngine.Serialization::FormerlySerializedAsAttribute*
class CORDL_TYPE FormerlySerializedAsAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_oldName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_oldName, put = __cordl_internal_set_m_oldName))::StringW m_oldName;

  static inline ::UnityEngine::Serialization::FormerlySerializedAsAttribute* New_ctor(::StringW oldName);

  constexpr ::StringW const& __cordl_internal_get_m_oldName() const;

  constexpr ::StringW& __cordl_internal_get_m_oldName();

  constexpr void __cordl_internal_set_m_oldName(::StringW value);

  /// @brief Method .ctor, addr 0x2e43b1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW oldName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormerlySerializedAsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormerlySerializedAsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormerlySerializedAsAttribute(FormerlySerializedAsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormerlySerializedAsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormerlySerializedAsAttribute(FormerlySerializedAsAttribute const&) = delete;

  /// @brief Field m_oldName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_oldName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Serialization::FormerlySerializedAsAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Serialization::FormerlySerializedAsAttribute, ___m_oldName) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Serialization
NEED_NO_BOX(::UnityEngine::Serialization::FormerlySerializedAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Serialization::FormerlySerializedAsAttribute*, "UnityEngine.Serialization", "FormerlySerializedAsAttribute");

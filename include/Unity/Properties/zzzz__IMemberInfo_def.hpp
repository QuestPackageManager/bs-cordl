#pragma once
// IWYU pragma private; include "Unity/Properties/IMemberInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMemberInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class IMemberInfo;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IMemberInfo);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IMemberInfo
class CORDL_TYPE IMemberInfo {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Method GetCustomAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes();

  /// @brief Method get_IsReadOnly, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ValueType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  // Ctor Parameters [CppParam { name: "", ty: "IMemberInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemberInfo(IMemberInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IMemberInfo*, "Unity.Properties", "IMemberInfo");

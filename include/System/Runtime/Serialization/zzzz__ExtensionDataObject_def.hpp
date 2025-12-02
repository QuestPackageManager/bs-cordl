#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExtensionDataObject)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class ExtensionDataMember;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ExtensionDataObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ExtensionDataObject);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ExtensionDataObject
class CORDL_TYPE ExtensionDataObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Members, put = set_Members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* Members;

  /// @brief Field members, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_members, put = __cordl_internal_set_members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* members;

  static inline ::System::Runtime::Serialization::ExtensionDataObject* New_ctor();

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* const& __cordl_internal_get_members() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*& __cordl_internal_get_members();

  constexpr void __cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value);

  /// @brief Method .ctor, addr 0x5f33dd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Members, addr 0x5f33ddc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* get_Members();

  /// @brief Method set_Members, addr 0x5f33de4, size 0x8, virtual false, abstract: false, final false
  inline void set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionDataObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionDataObject(ExtensionDataObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionDataObject(ExtensionDataObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16987 };

  /// @brief Field members, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* ___members;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataObject, ___members) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ExtensionDataObject, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ExtensionDataObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ExtensionDataObject*, "System.Runtime.Serialization", "ExtensionDataObject");

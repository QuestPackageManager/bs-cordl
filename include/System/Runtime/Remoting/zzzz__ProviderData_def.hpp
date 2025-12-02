#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ProviderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProviderData)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ProviderData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ProviderData);
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.ProviderData
class CORDL_TYPE ProviderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field CustomData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomData, put = __cordl_internal_set_CustomData)) ::System::Collections::IList* CustomData;

  /// @brief Field CustomProperties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomProperties, put = __cordl_internal_set_CustomProperties)) ::System::Collections::Hashtable* CustomProperties;

  /// @brief Field Id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) ::StringW Id;

  /// @brief Field Ref, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Ref, put = __cordl_internal_set_Ref)) ::StringW Ref;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::StringW Type;

  /// @brief Method CopyFrom, addr 0x5912228, size 0x69c, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Runtime::Remoting::ProviderData* other);

  static inline ::System::Runtime::Remoting::ProviderData* New_ctor();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_CustomData() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_CustomData();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_CustomProperties() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_CustomProperties();

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr ::StringW const& __cordl_internal_get_Ref() const;

  constexpr ::StringW& __cordl_internal_get_Ref();

  constexpr ::StringW const& __cordl_internal_get_Type() const;

  constexpr ::StringW& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_CustomData(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_CustomProperties(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Id(::StringW value);

  constexpr void __cordl_internal_set_Ref(::StringW value);

  constexpr void __cordl_internal_set_Type(::StringW value);

  /// @brief Method .ctor, addr 0x59121c8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderData(ProviderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderData(ProviderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3083 };

  /// @brief Field Ref, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Ref;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Type;

  /// @brief Field Id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief Field CustomProperties, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___CustomProperties;

  /// @brief Field CustomData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IList* ___CustomData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Ref) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___CustomProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ProviderData, ___CustomData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ProviderData, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ProviderData*, "System.Runtime.Remoting", "ProviderData");

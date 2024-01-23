#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDispositionHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ContentDispositionHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ContentDispositionHeaderValue);
// Type: System.Net.Http.Headers::ContentDispositionHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14663))
// CS Name: ::System.Net.Http.Headers::ContentDispositionHeaderValue*
class CORDL_TYPE ContentDispositionHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field dispositionType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dispositionType, put = __cordl_internal_set_dispositionType))::StringW dispositionType;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters))::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  __declspec(property(get = get_Parameters))::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::StringW& __cordl_internal_get_dispositionType();

  constexpr ::StringW const& __cordl_internal_get_dispositionType() const;

  constexpr void __cordl_internal_set_dispositionType(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  static inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x2837594, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* New_ctor(::System::Net::Http::Headers::ContentDispositionHeaderValue* source);

  /// @brief Method .ctor, addr 0x283759c, size 0x278, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::ContentDispositionHeaderValue* source);

  /// @brief Method get_Parameters, addr 0x2837814, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Method System.ICloneable.Clone, addr 0x28378c8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x2837928, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x28379f0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2837a6c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x2837ac4, size 0x170, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::ContentDispositionHeaderValue*> parsedValue);

  // Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentDispositionHeaderValue(ContentDispositionHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentDispositionHeaderValue(ContentDispositionHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentDispositionHeaderValue();

public:
  /// @brief Field dispositionType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dispositionType;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ContentDispositionHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentDispositionHeaderValue, ___dispositionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::ContentDispositionHeaderValue, ___parameters) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ContentDispositionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ContentDispositionHeaderValue*, "System.Net.Http.Headers", "ContentDispositionHeaderValue");

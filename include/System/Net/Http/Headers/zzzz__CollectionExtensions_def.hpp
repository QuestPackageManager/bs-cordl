#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CollectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::CollectionExtensions);
// Type: System.Net.Http.Headers::CollectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14877))
// CS Name: ::System.Net.Http.Headers::CollectionExtensions*
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SequenceEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSource> static inline bool SequenceEqual(::System::Collections::Generic::List_1<TSource>* first, ::System::Collections::Generic::List_1<TSource>* second);

  /// @brief Method SetValue addr 0x26bc098 size 0x1d4 virtual false final false
  static inline void SetValue(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters, ::StringW key, ::StringW value);

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW ToString(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method ToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void ToStringBuilder(::System::Collections::Generic::List_1<T>* list, ::System::Text::StringBuilder* sb);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::CollectionExtensions, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CollectionExtensions*, "System.Net.Http.Headers", "CollectionExtensions");

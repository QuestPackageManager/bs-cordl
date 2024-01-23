#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
CORDL_MODULE_EXPORT(BsonArray)
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonArray;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonArray);
// Type: Newtonsoft.Json.Bson::BsonArray
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12074))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12076))
// CS Name: ::Newtonsoft.Json.Bson::BsonArray*
class CORDL_TYPE BsonArray : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  /// @brief Field _children, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children))::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* _children;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Bson__BsonToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& __cordl_internal_get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*> const& __cordl_internal_get__children() const;

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* value);

  /// @brief Method Add, addr 0x26c8290, size 0xb0, virtual false, abstract: false, final false
  inline void Add(::Newtonsoft::Json::Bson::BsonToken* token);

  /// @brief Method get_Type, addr 0x26c8340, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  /// @brief Method GetEnumerator, addr 0x26c626c, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c8348, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  static inline ::Newtonsoft::Json::Bson::BsonArray* New_ctor();

  /// @brief Method .ctor, addr 0x26c834c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonArray(BsonArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonArray(BsonArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonArray();

public:
  /// @brief Field _children, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* ____children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonArray, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonArray, ____children) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonArray*, "Newtonsoft.Json.Bson", "BsonArray");

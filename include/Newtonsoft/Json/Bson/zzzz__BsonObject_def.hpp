#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BsonObject)
namespace Newtonsoft::Json::Bson {
class BsonProperty;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonObject;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonObject);
// Type: Newtonsoft.Json.Bson::BsonObject
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12074))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12075))
// CS Name: ::Newtonsoft.Json.Bson::BsonObject*
class CORDL_TYPE BsonObject : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  /// @brief Field _children, offset 0x20, size 0x8
  __declspec(property(get = __get__children, put = __set__children))::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* _children;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*& __get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*> const& __get__children() const;

  constexpr void __set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* value);

  /// @brief Method Add addr 0x26c8090 size 0x134 virtual false final false
  inline void Add(::StringW name, ::Newtonsoft::Json::Bson::BsonToken* token);

  /// @brief Method get_Type addr 0x26c8208 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  /// @brief Method GetEnumerator addr 0x26c6138 size 0x90 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26c8210 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  static inline ::Newtonsoft::Json::Bson::BsonObject* New_ctor();

  /// @brief Method .ctor addr 0x26c8214 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonObject(BsonObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonObject(BsonObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonObject();

public:
  /// @brief Field _children, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* ____children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonObject, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObject*, "Newtonsoft.Json.Bson", "BsonObject");

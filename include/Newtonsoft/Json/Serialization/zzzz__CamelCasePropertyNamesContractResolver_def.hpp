#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/CamelCasePropertyNamesContractResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_def.hpp"
CORDL_MODULE_EXPORT(CamelCasePropertyNamesContractResolver)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Utilities {
template <typename T1, typename T2> struct StructMultiKey_2;
}
namespace Newtonsoft::Json {
class DefaultJsonNameTable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class CamelCasePropertyNamesContractResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
// Dependencies Newtonsoft.Json.Serialization.DefaultContractResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
class CORDL_TYPE CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver {
public:
  // Declarations
  /// @brief Field NameTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NameTable, put = setStaticF_NameTable)) ::Newtonsoft::Json::DefaultJsonNameTable* NameTable;

  /// @brief Field TypeContractCacheLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TypeContractCacheLock, put = setStaticF_TypeContractCacheLock)) ::System::Object* TypeContractCacheLock;

  /// @brief Field _contractCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__contractCache,
                      put = setStaticF__contractCache)) ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonContract*>* _contractCache;

  /// @brief Method GetNameTable, addr 0x3ed7c00, size 0x58, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultJsonNameTable* GetNameTable();

  static inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* New_ctor();

  /// @brief Method ResolveContract, addr 0x3ed78dc, size 0x324, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* type);

  /// @brief Method .ctor, addr 0x3ed7748, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::DefaultJsonNameTable* getStaticF_NameTable();

  static inline ::System::Object* getStaticF_TypeContractCacheLock();

  static inline ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*
  getStaticF__contractCache();

  static inline void setStaticF_NameTable(::Newtonsoft::Json::DefaultJsonNameTable* value);

  static inline void setStaticF_TypeContractCacheLock(::System::Object* value);

  static inline void setStaticF__contractCache(
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CamelCasePropertyNamesContractResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*, "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver");

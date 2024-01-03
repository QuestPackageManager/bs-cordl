#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CachedAttributeGetter_1)
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
template <typename T> class CachedAttributeGetter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Serialization::CachedAttributeGetter_1);
// Type: Newtonsoft.Json.Serialization::CachedAttributeGetter`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11962))
// CS Name: ::Newtonsoft.Json.Serialization::CachedAttributeGetter`1<T>*
class CORDL_TYPE CachedAttributeGetter_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field TypeAttributeCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeAttributeCache, put = setStaticF_TypeAttributeCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>* TypeAttributeCache;

  static inline void setStaticF_TypeAttributeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>* getStaticF_TypeAttributeCache();

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetAttribute(::System::Object* type);

  // Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedAttributeGetter_1(CachedAttributeGetter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedAttributeGetter_1(CachedAttributeGetter_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedAttributeGetter_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Serialization::CachedAttributeGetter_1, "Newtonsoft.Json.Serialization", "CachedAttributeGetter`1");

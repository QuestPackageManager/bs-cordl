#pragma once
// IWYU pragma private; include "System/MonoCustomAttrs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoCustomAttrs)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class RuntimeEventInfo;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System {
class AttributeUsageAttribute;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class __MonoCustomAttrs__AttributeInfo;
}
// Forward declare root types
namespace System {
class MonoCustomAttrs;
}
namespace System {
class __MonoCustomAttrs__AttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoCustomAttrs);
MARK_REF_PTR_T(::System::__MonoCustomAttrs__AttributeInfo);
// Type: ::AttributeInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::MonoCustomAttrs::AttributeInfo*
class CORDL_TYPE __MonoCustomAttrs__AttributeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InheritanceLevel)) int32_t InheritanceLevel;

  __declspec(property(get = get_Usage))::System::AttributeUsageAttribute* Usage;

  /// @brief Field _inheritanceLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__inheritanceLevel, put = __cordl_internal_set__inheritanceLevel)) int32_t _inheritanceLevel;

  /// @brief Field _usage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__usage, put = __cordl_internal_set__usage))::System::AttributeUsageAttribute* _usage;

  static inline ::System::__MonoCustomAttrs__AttributeInfo* New_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  constexpr int32_t const& __cordl_internal_get__inheritanceLevel() const;

  constexpr int32_t& __cordl_internal_get__inheritanceLevel();

  constexpr ::System::AttributeUsageAttribute*& __cordl_internal_get__usage();

  constexpr ::cordl_internals::to_const_pointer<::System::AttributeUsageAttribute*> const& __cordl_internal_get__usage() const;

  constexpr void __cordl_internal_set__inheritanceLevel(int32_t value);

  constexpr void __cordl_internal_set__usage(::System::AttributeUsageAttribute* value);

  /// @brief Method .ctor, addr 0x29b1b38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  /// @brief Method get_InheritanceLevel, addr 0x29b4264, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InheritanceLevel();

  /// @brief Method get_Usage, addr 0x29b425c, size 0x8, virtual false, abstract: false, final false
  inline ::System::AttributeUsageAttribute* get_Usage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoCustomAttrs__AttributeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MonoCustomAttrs__AttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MonoCustomAttrs__AttributeInfo(__MonoCustomAttrs__AttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MonoCustomAttrs__AttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MonoCustomAttrs__AttributeInfo(__MonoCustomAttrs__AttributeInfo const&) = delete;

  /// @brief Field _usage, offset: 0x10, size: 0x8, def value: None
  ::System::AttributeUsageAttribute* ____usage;

  /// @brief Field _inheritanceLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ____inheritanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__MonoCustomAttrs__AttributeInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__MonoCustomAttrs__AttributeInfo, ____usage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__MonoCustomAttrs__AttributeInfo, ____inheritanceLevel) == 0x18, "Offset mismatch!");

} // namespace System
// Type: System::MonoCustomAttrs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::MonoCustomAttrs*
class CORDL_TYPE MonoCustomAttrs : public ::System::Object {
public:
  // Declarations
  using AttributeInfo = ::System::__MonoCustomAttrs__AttributeInfo;

  /// @brief Field DefaultAttributeUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultAttributeUsage, put = setStaticF_DefaultAttributeUsage))::System::AttributeUsageAttribute* DefaultAttributeUsage;

  /// @brief Field corlib, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_corlib, put = setStaticF_corlib))::System::Reflection::Assembly* corlib;

  /// @brief Field usage_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_usage_cache, put = setStaticF_usage_cache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* usage_cache;

  /// @brief Method GetBase, addr 0x29b1610, size 0x3b4, virtual false, abstract: false, final false
  static inline ::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method GetBaseEventDefinition, addr 0x29b3d84, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* evt);

  /// @brief Method GetBasePropertyDefinition, addr 0x29b3a9c, size 0x2e8, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* property);

  /// @brief Method GetCustomAttributes, addr 0x29b0c88, size 0x988, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x29b1b44, size 0x178, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesBase, addr 0x29b0ae4, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                 bool inheritedOnly);

  /// @brief Method GetCustomAttributesData, addr 0x29b1f98, size 0x1360, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                             ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributesData, addr 0x29b1cc0, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesDataBase, addr 0x29b1dec, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                 ::System::Type* attributeType, bool inheritedOnly);

  /// @brief Method GetCustomAttributesDataInternal, addr 0x29b1cbc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method GetCustomAttributesInternal, addr 0x29b068c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                           bool pseudoAttrs);

  /// @brief Method GetPseudoCustomAttributes, addr 0x29b0694, size 0x2ec, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributes, addr 0x29b0980, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Type* type);

  /// @brief Method GetPseudoCustomAttributesData, addr 0x29b32f8, size 0x2f0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributesData, addr 0x29b35e8, size 0x218, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData(::System::Type* type);

  /// @brief Method IsDefined, addr 0x29b3800, size 0x298, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefinedInternal, addr 0x29b3a98, size 0x4, virtual false, abstract: false, final false
  static inline bool IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType);

  /// @brief Method IsUserCattrProvider, addr 0x29b04c0, size 0x1cc, virtual false, abstract: false, final false
  static inline bool IsUserCattrProvider(::System::Object* obj);

  /// @brief Method RetrieveAttributeUsage, addr 0x29b19c4, size 0x174, virtual false, abstract: false, final false
  static inline ::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* attributeType);

  /// @brief Method RetrieveAttributeUsageNoCache, addr 0x29b3f94, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(::System::Type* attributeType);

  static inline ::System::AttributeUsageAttribute* getStaticF_DefaultAttributeUsage();

  static inline ::System::Reflection::Assembly* getStaticF_corlib();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* getStaticF_usage_cache();

  static inline void setStaticF_DefaultAttributeUsage(::System::AttributeUsageAttribute* value);

  static inline void setStaticF_corlib(::System::Reflection::Assembly* value);

  static inline void setStaticF_usage_cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoCustomAttrs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoCustomAttrs(MonoCustomAttrs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoCustomAttrs(MonoCustomAttrs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoCustomAttrs, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoCustomAttrs);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoCustomAttrs*, "System", "MonoCustomAttrs");
NEED_NO_BOX(::System::__MonoCustomAttrs__AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::__MonoCustomAttrs__AttributeInfo*, "System", "MonoCustomAttrs/AttributeInfo");

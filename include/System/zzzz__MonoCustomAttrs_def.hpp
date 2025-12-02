#pragma once
// IWYU pragma private; include "System/MonoCustomAttrs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class MonoCustomAttrs_AttributeInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class MonoCustomAttrs;
}
namespace System {
class MonoCustomAttrs_AttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoCustomAttrs);
MARK_REF_PTR_T(::System::MonoCustomAttrs_AttributeInfo);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MonoCustomAttrs/AttributeInfo
class CORDL_TYPE MonoCustomAttrs_AttributeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InheritanceLevel)) int32_t InheritanceLevel;

  __declspec(property(get = get_Usage)) ::System::AttributeUsageAttribute* Usage;

  /// @brief Field _inheritanceLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__inheritanceLevel, put = __cordl_internal_set__inheritanceLevel)) int32_t _inheritanceLevel;

  /// @brief Field _usage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__usage, put = __cordl_internal_set__usage)) ::System::AttributeUsageAttribute* _usage;

  static inline ::System::MonoCustomAttrs_AttributeInfo* New_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  constexpr int32_t const& __cordl_internal_get__inheritanceLevel() const;

  constexpr int32_t& __cordl_internal_get__inheritanceLevel();

  constexpr ::System::AttributeUsageAttribute* const& __cordl_internal_get__usage() const;

  constexpr ::System::AttributeUsageAttribute*& __cordl_internal_get__usage();

  constexpr void __cordl_internal_set__inheritanceLevel(int32_t value);

  constexpr void __cordl_internal_set__usage(::System::AttributeUsageAttribute* value);

  /// @brief Method .ctor, addr 0x5a7de34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  /// @brief Method get_InheritanceLevel, addr 0x5a80508, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InheritanceLevel();

  /// @brief Method get_Usage, addr 0x5a80500, size 0x8, virtual false, abstract: false, final false
  inline ::System::AttributeUsageAttribute* get_Usage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoCustomAttrs_AttributeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs_AttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoCustomAttrs_AttributeInfo(MonoCustomAttrs_AttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs_AttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoCustomAttrs_AttributeInfo(MonoCustomAttrs_AttributeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2617 };

  /// @brief Field _usage, offset: 0x10, size: 0x8, def value: None
  ::System::AttributeUsageAttribute* ____usage;

  /// @brief Field _inheritanceLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ____inheritanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MonoCustomAttrs_AttributeInfo, ____usage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::MonoCustomAttrs_AttributeInfo, ____inheritanceLevel) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MonoCustomAttrs_AttributeInfo, 0x20>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MonoCustomAttrs
class CORDL_TYPE MonoCustomAttrs : public ::System::Object {
public:
  // Declarations
  using AttributeInfo = ::System::MonoCustomAttrs_AttributeInfo;

  /// @brief Field DefaultAttributeUsage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultAttributeUsage, put = setStaticF_DefaultAttributeUsage)) ::System::AttributeUsageAttribute* DefaultAttributeUsage;

  /// @brief Field corlib, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_corlib, put = setStaticF_corlib)) ::System::Reflection::Assembly* corlib;

  /// @brief Field usage_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_usage_cache, put = setStaticF_usage_cache)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* usage_cache;

  /// @brief Method GetBase, addr 0x5a7d844, size 0x3a4, virtual false, abstract: false, final false
  static inline ::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method GetBaseEventDefinition, addr 0x5a80058, size 0x208, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* evt);

  /// @brief Method GetBasePropertyDefinition, addr 0x5a7fd80, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* property);

  /// @brief Method GetCustomAttributes, addr 0x5a7ce9c, size 0x9a8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5a7de40, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesBase, addr 0x5a7ccec, size 0x1b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                 bool inheritedOnly);

  /// @brief Method GetCustomAttributesData, addr 0x5a7e2c0, size 0x12ec, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                             ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributesData, addr 0x5a7dfc0, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesDataBase, addr 0x5a7e0f0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                 ::System::Type* attributeType, bool inheritedOnly);

  /// @brief Method GetCustomAttributesDataInternal, addr 0x5a7dfbc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method GetCustomAttributesInternal, addr 0x5a7c86c, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                           bool pseudoAttrs);

  /// @brief Method GetPseudoCustomAttributes, addr 0x5a7c870, size 0x304, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributes, addr 0x5a7cb74, size 0x178, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Type* type);

  /// @brief Method GetPseudoCustomAttributesData, addr 0x5a7f5ac, size 0x30c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributesData, addr 0x5a7f8b8, size 0x240, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData(::System::Type* type);

  /// @brief Method IsDefined, addr 0x5a7faf8, size 0x284, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefinedInternal, addr 0x5a7fd7c, size 0x4, virtual false, abstract: false, final false
  static inline bool IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType);

  /// @brief Method IsUserCattrProvider, addr 0x5a7c6c4, size 0x1a8, virtual false, abstract: false, final false
  static inline bool IsUserCattrProvider(::System::Object* obj);

  /// @brief Method RetrieveAttributeUsage, addr 0x5a7dbe8, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* attributeType);

  /// @brief Method RetrieveAttributeUsageNoCache, addr 0x5a80260, size 0x224, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoCustomAttrs, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoCustomAttrs);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoCustomAttrs*, "System", "MonoCustomAttrs");
NEED_NO_BOX(::System::MonoCustomAttrs_AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoCustomAttrs_AttributeInfo*, "System", "MonoCustomAttrs/AttributeInfo");

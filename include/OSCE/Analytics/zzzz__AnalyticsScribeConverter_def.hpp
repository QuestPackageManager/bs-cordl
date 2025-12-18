#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsScribeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnalyticsScribeConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace OSCE::Analytics {
class AnalyticsScribeConverter___c__DisplayClass4_0;
}
namespace OSCE::Analytics {
class BaseAnalyticsEvent;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace OSCE::Analytics {
class AnalyticsScribeConverter;
}
namespace OSCE::Analytics {
class AnalyticsScribeConverter___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::AnalyticsScribeConverter);
MARK_REF_PTR_T(::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0);
// Dependencies System.Object
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.AnalyticsScribeConverter/<>c__DisplayClass4_0
class CORDL_TYPE AnalyticsScribeConverter___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0* New_ctor();

  /// @brief Method <CacheAndWriteTypePropertiesForType>b__0, addr 0x5d8ec4c, size 0x60, virtual false, abstract: false, final false
  inline bool _CacheAndWriteTypePropertiesForType_b__0(::System::Reflection::PropertyInfo* prop);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5d8eb90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsScribeConverter___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsScribeConverter___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsScribeConverter___c__DisplayClass4_0(AnalyticsScribeConverter___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsScribeConverter___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsScribeConverter___c__DisplayClass4_0(AnalyticsScribeConverter___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21720 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace OSCE::Analytics
// Dependencies Newtonsoft.Json.JsonConverter
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.AnalyticsScribeConverter
class CORDL_TYPE AnalyticsScribeConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0;

  /// @brief Field _cachedPropertyInfoByType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cachedPropertyInfoByType, put = setStaticF__cachedPropertyInfoByType)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>* _cachedPropertyInfoByType;

  /// @brief Method CacheAndWriteTypePropertiesForType, addr 0x5d8e558, size 0x638, virtual false, abstract: false, final false
  inline void CacheAndWriteTypePropertiesForType(::OSCE::Analytics::BaseAnalyticsEvent* baseAnalyticsEvent, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typesForScribeObject,
                                                 ::StringW scribeTypeString, ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert, addr 0x5d8e2a0, size 0x8, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::OSCE::Analytics::AnalyticsScribeConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5d8e2a8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x5d8e2e0, size 0x278, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5d8eb94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,
                                                             ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>*
  getStaticF__cachedPropertyInfoByType();

  static inline void setStaticF__cachedPropertyInfoByType(
      ::System::Collections::Generic::Dictionary_2<::System::Type*,
                                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsScribeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsScribeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsScribeConverter(AnalyticsScribeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsScribeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsScribeConverter(AnalyticsScribeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsScribeConverter, 0x10>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::AnalyticsScribeConverter);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsScribeConverter*, "OSCE.Analytics", "AnalyticsScribeConverter");
NEED_NO_BOX(::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*, "OSCE.Analytics", "AnalyticsScribeConverter/<>c__DisplayClass4_0");

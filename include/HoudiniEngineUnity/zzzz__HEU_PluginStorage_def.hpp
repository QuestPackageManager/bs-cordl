#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PluginStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PluginStorage)
namespace HoudiniEngineUnity {
struct HEU_PluginStorage_DataType;
}
namespace HoudiniEngineUnity {
template <typename T> class HEU_PluginStorage_StoreDataArray_1;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage_StoreData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_PluginStorage_DataType;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage_StoreData;
}
namespace HoudiniEngineUnity {
template <typename T> class HEU_PluginStorage_StoreDataArray_1;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_PluginStorage_DataType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginStorage);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginStorage_StoreData);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_PluginStorage/DataType
struct CORDL_TYPE HEU_PluginStorage_DataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_PluginStorage_DataType_Unwrapped
  enum struct __HEU_PluginStorage_DataType_Unwrapped : int32_t {
    __E_BOOL = static_cast<int32_t>(0x0),
    __E_INT = static_cast<int32_t>(0x1),
    __E_LONG = static_cast<int32_t>(0x2),
    __E_FLOAT = static_cast<int32_t>(0x3),
    __E_STRING = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_PluginStorage_DataType_Unwrapped() const noexcept {
    return static_cast<__HEU_PluginStorage_DataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginStorage_DataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_PluginStorage_DataType(int32_t value__) noexcept;

  /// @brief Field BOOL value: I32(0)
  static ::HoudiniEngineUnity::HEU_PluginStorage_DataType const BOOL;

  /// @brief Field FLOAT value: I32(3)
  static ::HoudiniEngineUnity::HEU_PluginStorage_DataType const FLOAT;

  /// @brief Field INT value: I32(1)
  static ::HoudiniEngineUnity::HEU_PluginStorage_DataType const INT;

  /// @brief Field LONG value: I32(2)
  static ::HoudiniEngineUnity::HEU_PluginStorage_DataType const LONG;

  /// @brief Field STRING value: I32(4)
  static ::HoudiniEngineUnity::HEU_PluginStorage_DataType const STRING;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11664 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage_DataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginStorage_DataType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_PluginStorage::DataType, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PluginStorage/StoreData
class CORDL_TYPE HEU_PluginStorage_StoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::HoudiniEngineUnity::HEU_PluginStorage_DataType _type;

  /// @brief Field _valueStr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__valueStr, put = __cordl_internal_set__valueStr)) ::StringW _valueStr;

  static inline ::HoudiniEngineUnity::HEU_PluginStorage_StoreData* New_ctor();

  constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType const& __cordl_internal_get__type() const;

  constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType& __cordl_internal_get__type();

  constexpr ::StringW const& __cordl_internal_get__valueStr() const;

  constexpr ::StringW& __cordl_internal_get__valueStr();

  constexpr void __cordl_internal_set__type(::HoudiniEngineUnity::HEU_PluginStorage_DataType value);

  constexpr void __cordl_internal_set__valueStr(::StringW value);

  /// @brief Method .ctor, addr 0x3a4578c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginStorage_StoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage_StoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PluginStorage_StoreData(HEU_PluginStorage_StoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage_StoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PluginStorage_StoreData(HEU_PluginStorage_StoreData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11665 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_PluginStorage_DataType ____type;

  /// @brief Field _valueStr, offset: 0x18, size: 0x8, def value: None
  ::StringW ____valueStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage_StoreData, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage_StoreData, ____valueStr) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginStorage_StoreData, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PluginStorage/StoreDataArray`1<T>
class CORDL_TYPE HEU_PluginStorage_StoreDataArray_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::ArrayW<T, ::Array<T>*> _array;

  static inline ::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>* New_ctor();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__array();

  constexpr void __cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginStorage_StoreDataArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage_StoreDataArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PluginStorage_StoreDataArray_1(HEU_PluginStorage_StoreDataArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage_StoreDataArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PluginStorage_StoreDataArray_1(HEU_PluginStorage_StoreDataArray_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11666 };

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PluginStorage
class CORDL_TYPE HEU_PluginStorage : public ::System::Object {
public:
  // Declarations
  using DataType = ::HoudiniEngineUnity::HEU_PluginStorage_DataType;

  using StoreData = ::HoudiniEngineUnity::HEU_PluginStorage_StoreData;

  template <typename T> using StoreDataArray_1 = ::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>;

  __declspec(property(get = get_RequiresSave)) bool RequiresSave;

  /// @brief Field _dataMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataMap,
                      put = __cordl_internal_set__dataMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* _dataMap;

  /// @brief Field _envPathMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__envPathMap, put = __cordl_internal_set__envPathMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _envPathMap;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::HoudiniEngineUnity::HEU_PluginStorage* _instance;

  /// @brief Field _requiresSave, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresSave, put = __cordl_internal_set__requiresSave)) bool _requiresSave;

  /// @brief Method ClearPluginData, addr 0x3a45fb0, size 0xac, virtual false, abstract: false, final false
  static inline void ClearPluginData();

  /// @brief Method ConvertEnvKeyedPathToReal, addr 0x3a3c14c, size 0x238, virtual false, abstract: false, final false
  inline ::StringW ConvertEnvKeyedPathToReal(::StringW inPath);

  /// @brief Method ConvertRealPathToEnvKeyedPath, addr 0x3a4623c, size 0x1f0, virtual false, abstract: false, final false
  inline ::StringW ConvertRealPathToEnvKeyedPath(::StringW inPath);

  /// @brief Method DeleteAllSavedSessionData, addr 0x3a46238, size 0x4, virtual false, abstract: false, final false
  static inline void DeleteAllSavedSessionData();

  /// @brief Method Get, addr 0x3a40b54, size 0xbc, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<::StringW> value, ::StringW defaultValue);

  /// @brief Method Get, addr 0x3a41150, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<bool> value, bool defaultValue);

  /// @brief Method Get, addr 0x3a41ea8, size 0x134, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<float_t> value, float_t defaultValue);

  /// @brief Method Get, addr 0x3a42868, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<int32_t> value, int32_t defaultValue);

  /// @brief Method Get, addr 0x3a45868, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<int64_t> value, int64_t defaultValue);

  /// @brief Method Get, addr 0x3a430e4, size 0x1c8, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ::ByRef<::System::Collections::Generic::List_1<::StringW>*> values, char16_t delimiter);

  /// @brief Method GetEnvironmentPathMap, addr 0x3a44bd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetEnvironmentPathMap();

  /// @brief Method GetJSONArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetJSONArray(::StringW jsonArray);

  /// @brief Method InstantiateAndLoad, addr 0x3a44be8, size 0xd0, virtual false, abstract: false, final false
  static inline void InstantiateAndLoad();

  /// @brief Method LoadAllSessionData, addr 0x3a461d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* LoadAllSessionData();

  /// @brief Method LoadAssetEnvironmentPaths, addr 0x3a40d10, size 0x3dc, virtual false, abstract: false, final false
  inline void LoadAssetEnvironmentPaths();

  /// @brief Method LoadFromSavedFile, addr 0x3a4605c, size 0x58, virtual false, abstract: false, final false
  static inline void LoadFromSavedFile();

  /// @brief Method LoadPluginData, addr 0x3a44d34, size 0xa58, virtual false, abstract: false, final false
  inline bool LoadPluginData();

  /// @brief Method MarkDirtyForSave, addr 0x3a45794, size 0x4, virtual false, abstract: false, final false
  inline void MarkDirtyForSave();

  static inline ::HoudiniEngineUnity::HEU_PluginStorage* New_ctor();

  /// @brief Method ReadFromEditorPrefs, addr 0x3a45fa8, size 0x8, virtual false, abstract: false, final false
  inline bool ReadFromEditorPrefs();

  /// @brief Method SaveAllSessionData, addr 0x3a461cc, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAllSessionData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>* allSessions);

  /// @brief Method SaveIfRequired, addr 0x3a4595c, size 0x60, virtual false, abstract: false, final false
  static inline void SaveIfRequired();

  /// @brief Method SavePluginData, addr 0x3a459bc, size 0x4d4, virtual false, abstract: false, final false
  inline bool SavePluginData();

  /// @brief Method SessionFilePath, addr 0x3a460b4, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW SessionFilePath();

  /// @brief Method Set, addr 0x3a40c70, size 0xa0, virtual false, abstract: false, final false
  inline void Set(::StringW key, ::StringW value);

  /// @brief Method Set, addr 0x3a41298, size 0xcc, virtual false, abstract: false, final false
  inline void Set(::StringW key, bool value);

  /// @brief Method Set, addr 0x3a42030, size 0xd8, virtual false, abstract: false, final false
  inline void Set(::StringW key, float_t value);

  /// @brief Method Set, addr 0x3a429b0, size 0xd0, virtual false, abstract: false, final false
  inline void Set(::StringW key, int32_t value);

  /// @brief Method Set, addr 0x3a45798, size 0xd0, virtual false, abstract: false, final false
  inline void Set(::StringW key, int64_t value);

  /// @brief Method Set, addr 0x3a43304, size 0x15c, virtual false, abstract: false, final false
  inline void Set(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values, char16_t delimiter);

  /// @brief Method SetCurrentCulture, addr 0x3a44124, size 0x10c, virtual false, abstract: false, final false
  static inline void SetCurrentCulture(bool useInvariant);

  /// @brief Method SettingsFilePath, addr 0x3a45e90, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW SettingsFilePath();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* const& __cordl_internal_get__dataMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>*& __cordl_internal_get__dataMap();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__envPathMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__envPathMap();

  constexpr bool const& __cordl_internal_get__requiresSave() const;

  constexpr bool& __cordl_internal_get__requiresSave();

  constexpr void __cordl_internal_set__dataMap(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* value);

  constexpr void __cordl_internal_set__envPathMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__requiresSave(bool value);

  /// @brief Method .ctor, addr 0x3a44cb8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_PluginStorage* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x3a3c0f0, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_PluginStorage* get_Instance();

  /// @brief Method get_RequiresSave, addr 0x3a44be0, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresSave();

  static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_PluginStorage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PluginStorage(HEU_PluginStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PluginStorage(HEU_PluginStorage const&) = delete;

  /// @brief Field PluginSettingsLine1 offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsLine1{ u"Houdini Engine for Unity Plugin Settings" };

  /// @brief Field PluginSettingsLine2 offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsLine2{ u"Version=" };

  /// @brief Field PluginSettingsVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsVersion{ u"1.0" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11667 };

  /// @brief Field _dataMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* ____dataMap;

  /// @brief Field _envPathMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____envPathMap;

  /// @brief Field _requiresSave, offset: 0x20, size: 0x1, def value: None
  bool ____requiresSave;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____dataMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____envPathMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____requiresSave) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginStorage, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage_DataType, "HoudiniEngineUnity", "HEU_PluginStorage/DataType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginStorage);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage*, "HoudiniEngineUnity", "HEU_PluginStorage");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginStorage_StoreData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage_StoreData*, "HoudiniEngineUnity", "HEU_PluginStorage/StoreData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1, "HoudiniEngineUnity", "HEU_PluginStorage/StoreDataArray`1");

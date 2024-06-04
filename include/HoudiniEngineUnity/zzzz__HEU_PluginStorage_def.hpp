#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PluginStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_PluginStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PluginStorage)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
struct __HEU_PluginStorage__DataType;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_PluginStorage__StoreDataArray_1;
}
namespace HoudiniEngineUnity {
class __HEU_PluginStorage__StoreData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_PluginStorage__DataType;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage;
}
namespace HoudiniEngineUnity {
class __HEU_PluginStorage__StoreData;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_PluginStorage__StoreDataArray_1;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_PluginStorage__DataType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginStorage);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1);
// Type: ::DataType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_PluginStorage::DataType
struct CORDL_TYPE __HEU_PluginStorage__DataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_PluginStorage__DataType_Unwrapped
  enum struct ____HEU_PluginStorage__DataType_Unwrapped : int32_t {
    __E_BOOL = static_cast<int32_t>(0x0),
    __E_INT = static_cast<int32_t>(0x1),
    __E_LONG = static_cast<int32_t>(0x2),
    __E_FLOAT = static_cast<int32_t>(0x3),
    __E_STRING = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_PluginStorage__DataType_Unwrapped() const noexcept {
    return static_cast<____HEU_PluginStorage__DataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PluginStorage__DataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_PluginStorage__DataType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BOOL value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const BOOL;

  /// @brief Field FLOAT value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const FLOAT;

  /// @brief Field INT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const INT;

  /// @brief Field LONG value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const LONG;

  /// @brief Field STRING value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const STRING;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PluginStorage__DataType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PluginStorage__DataType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::StoreData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_PluginStorage::StoreData*
class CORDL_TYPE __HEU_PluginStorage__StoreData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::HoudiniEngineUnity::__HEU_PluginStorage__DataType _type;

  /// @brief Field _valueStr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__valueStr, put = __cordl_internal_set__valueStr))::StringW _valueStr;

  static inline ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData* New_ctor();

  constexpr ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const& __cordl_internal_get__type() const;

  constexpr ::HoudiniEngineUnity::__HEU_PluginStorage__DataType& __cordl_internal_get__type();

  constexpr ::StringW const& __cordl_internal_get__valueStr() const;

  constexpr ::StringW& __cordl_internal_get__valueStr();

  constexpr void __cordl_internal_set__type(::HoudiniEngineUnity::__HEU_PluginStorage__DataType value);

  constexpr void __cordl_internal_set__valueStr(::StringW value);

  /// @brief Method .ctor, addr 0x258a0ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PluginStorage__StoreData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PluginStorage__StoreData(__HEU_PluginStorage__StoreData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PluginStorage__StoreData(__HEU_PluginStorage__StoreData const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_PluginStorage__DataType ____type;

  /// @brief Field _valueStr, offset: 0x18, size: 0x8, def value: None
  ::StringW ____valueStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PluginStorage__StoreData, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData, ____valueStr) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::StoreDataArray`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_PluginStorage::StoreDataArray`1<T>*
class CORDL_TYPE __HEU_PluginStorage__StoreDataArray_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array))::ArrayW<T, ::Array<T>*> _array;

  static inline ::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1<T>* New_ctor();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__array();

  constexpr void __cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_PluginStorage__StoreDataArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreDataArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_PluginStorage__StoreDataArray_1(__HEU_PluginStorage__StoreDataArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreDataArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_PluginStorage__StoreDataArray_1(__HEU_PluginStorage__StoreDataArray_1 const&) = delete;

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PluginStorage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_PluginStorage*
class CORDL_TYPE HEU_PluginStorage : public ::System::Object {
public:
  // Declarations
  using DataType = ::HoudiniEngineUnity::__HEU_PluginStorage__DataType;

  using StoreData = ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData;

  template <typename T> using StoreDataArray_1 = ::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1<T>;

  __declspec(property(get = get_RequiresSave)) bool RequiresSave;

  /// @brief Field _dataMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataMap,
                      put = __cordl_internal_set__dataMap))::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>* _dataMap;

  /// @brief Field _envPathMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__envPathMap, put = __cordl_internal_set__envPathMap))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _envPathMap;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::HoudiniEngineUnity::HEU_PluginStorage* _instance;

  /// @brief Field _requiresSave, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresSave, put = __cordl_internal_set__requiresSave)) bool _requiresSave;

  /// @brief Method ClearPluginData, addr 0x258a880, size 0xb0, virtual false, abstract: false, final false
  static inline void ClearPluginData();

  /// @brief Method ConvertEnvKeyedPathToReal, addr 0x25809d4, size 0x230, virtual false, abstract: false, final false
  inline ::StringW ConvertEnvKeyedPathToReal(::StringW inPath);

  /// @brief Method ConvertRealPathToEnvKeyedPath, addr 0x258aad4, size 0x1e8, virtual false, abstract: false, final false
  inline ::StringW ConvertRealPathToEnvKeyedPath(::StringW inPath);

  /// @brief Method DeleteAllSavedSessionData, addr 0x258aad0, size 0x4, virtual false, abstract: false, final false
  static inline void DeleteAllSavedSessionData();

  /// @brief Method Get, addr 0x25854b0, size 0xc0, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<::StringW> value, ::StringW defaultValue);

  /// @brief Method Get, addr 0x2585aa4, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<bool> value, bool defaultValue);

  /// @brief Method Get, addr 0x25867fc, size 0x134, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<float_t> value, float_t defaultValue);

  /// @brief Method Get, addr 0x25871c8, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<int32_t> value, int32_t defaultValue);

  /// @brief Method Get, addr 0x258a188, size 0xf4, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<int64_t> value, int64_t defaultValue);

  /// @brief Method Get, addr 0x2587a44, size 0x1cc, virtual false, abstract: false, final false
  inline bool Get(::StringW key, ByRef<::System::Collections::Generic::List_1<::StringW>*> values, char16_t delimiter);

  /// @brief Method GetEnvironmentPathMap, addr 0x2589518, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetEnvironmentPathMap();

  /// @brief Method GetJSONArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetJSONArray(::StringW jsonArray);

  /// @brief Method InstantiateAndLoad, addr 0x2589528, size 0xd4, virtual false, abstract: false, final false
  static inline void InstantiateAndLoad();

  /// @brief Method LoadAllSessionData, addr 0x258aa60, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* LoadAllSessionData();

  /// @brief Method LoadAssetEnvironmentPaths, addr 0x2585670, size 0x3d0, virtual false, abstract: false, final false
  inline void LoadAssetEnvironmentPaths();

  /// @brief Method LoadFromSavedFile, addr 0x258a930, size 0x58, virtual false, abstract: false, final false
  static inline void LoadFromSavedFile();

  /// @brief Method LoadPluginData, addr 0x2589678, size 0xa34, virtual false, abstract: false, final false
  inline bool LoadPluginData();

  /// @brief Method MarkDirtyForSave, addr 0x258a0b4, size 0x4, virtual false, abstract: false, final false
  inline void MarkDirtyForSave();

  static inline ::HoudiniEngineUnity::HEU_PluginStorage* New_ctor();

  /// @brief Method ReadFromEditorPrefs, addr 0x258a878, size 0x8, virtual false, abstract: false, final false
  inline bool ReadFromEditorPrefs();

  /// @brief Method SaveAllSessionData, addr 0x258aa5c, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAllSessionData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>* allSessions);

  /// @brief Method SaveIfRequired, addr 0x258a27c, size 0x60, virtual false, abstract: false, final false
  static inline void SaveIfRequired();

  /// @brief Method SavePluginData, addr 0x258a2dc, size 0x4c8, virtual false, abstract: false, final false
  inline bool SavePluginData();

  /// @brief Method SessionFilePath, addr 0x258a988, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW SessionFilePath();

  /// @brief Method Set, addr 0x25855d0, size 0xa0, virtual false, abstract: false, final false
  inline void Set(::StringW key, ::StringW value);

  /// @brief Method Set, addr 0x2585bec, size 0xcc, virtual false, abstract: false, final false
  inline void Set(::StringW key, bool value);

  /// @brief Method Set, addr 0x2586984, size 0xd8, virtual false, abstract: false, final false
  inline void Set(::StringW key, float_t value);

  /// @brief Method Set, addr 0x2587310, size 0xd0, virtual false, abstract: false, final false
  inline void Set(::StringW key, int32_t value);

  /// @brief Method Set, addr 0x258a0b8, size 0xd0, virtual false, abstract: false, final false
  inline void Set(::StringW key, int64_t value);

  /// @brief Method Set, addr 0x2587c68, size 0x154, virtual false, abstract: false, final false
  inline void Set(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values, char16_t delimiter);

  /// @brief Method SetCurrentCulture, addr 0x2588a84, size 0x10c, virtual false, abstract: false, final false
  static inline void SetCurrentCulture(bool useInvariant);

  /// @brief Method SettingsFilePath, addr 0x258a7a4, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW SettingsFilePath();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>*& __cordl_internal_get__dataMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>*> const&
  __cordl_internal_get__dataMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__envPathMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__envPathMap() const;

  constexpr bool const& __cordl_internal_get__requiresSave() const;

  constexpr bool& __cordl_internal_get__requiresSave();

  constexpr void __cordl_internal_set__dataMap(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>* value);

  constexpr void __cordl_internal_set__envPathMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__requiresSave(bool value);

  /// @brief Method .ctor, addr 0x25895fc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_PluginStorage* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2580978, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_PluginStorage* get_Instance();

  /// @brief Method get_RequiresSave, addr 0x2589520, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _dataMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>* ____dataMap;

  /// @brief Field _envPathMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____envPathMap;

  /// @brief Field _requiresSave, offset: 0x20, size: 0x1, def value: None
  bool ____requiresSave;

  /// @brief Field PluginSettingsLine1 offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsLine1{ u"Houdini Engine for Unity Plugin Settings" };

  /// @brief Field PluginSettingsLine2 offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsLine2{ u"Version=" };

  /// @brief Field PluginSettingsVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString PluginSettingsVersion{ u"1.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginStorage, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____dataMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____envPathMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PluginStorage, ____requiresSave) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PluginStorage__DataType, "HoudiniEngineUnity", "HEU_PluginStorage/DataType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginStorage);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage*, "HoudiniEngineUnity", "HEU_PluginStorage");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*, "HoudiniEngineUnity", "HEU_PluginStorage/StoreData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1, "HoudiniEngineUnity", "HEU_PluginStorage/StoreDataArray`1");

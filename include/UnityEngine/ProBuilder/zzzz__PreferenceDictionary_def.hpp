#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PreferenceDictionary)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class PreferenceDictionary;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::PreferenceDictionary);
// Type: UnityEngine.ProBuilder::PreferenceDictionary
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::PreferenceDictionary*
class CORDL_TYPE PreferenceDictionary : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_Bool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bool, put = __cordl_internal_set_m_Bool))::System::Collections::Generic::Dictionary_2<::StringW, bool>* m_Bool;

  /// @brief Field m_Bool_keys, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bool_keys, put = __cordl_internal_set_m_Bool_keys))::System::Collections::Generic::List_1<::StringW>* m_Bool_keys;

  /// @brief Field m_Bool_values, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bool_values, put = __cordl_internal_set_m_Bool_values))::System::Collections::Generic::List_1<bool>* m_Bool_values;

  /// @brief Field m_Color, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* m_Color;

  /// @brief Field m_Color_keys, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Color_keys, put = __cordl_internal_set_m_Color_keys))::System::Collections::Generic::List_1<::StringW>* m_Color_keys;

  /// @brief Field m_Color_values, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Color_values, put = __cordl_internal_set_m_Color_values))::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Color_values;

  /// @brief Field m_Float, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Float, put = __cordl_internal_set_m_Float))::System::Collections::Generic::Dictionary_2<::StringW, float_t>* m_Float;

  /// @brief Field m_Float_keys, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Float_keys, put = __cordl_internal_set_m_Float_keys))::System::Collections::Generic::List_1<::StringW>* m_Float_keys;

  /// @brief Field m_Float_values, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Float_values, put = __cordl_internal_set_m_Float_values))::System::Collections::Generic::List_1<float_t>* m_Float_values;

  /// @brief Field m_Int, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Int, put = __cordl_internal_set_m_Int))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_Int;

  /// @brief Field m_Int_keys, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Int_keys, put = __cordl_internal_set_m_Int_keys))::System::Collections::Generic::List_1<::StringW>* m_Int_keys;

  /// @brief Field m_Int_values, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Int_values, put = __cordl_internal_set_m_Int_values))::System::Collections::Generic::List_1<int32_t>* m_Int_values;

  /// @brief Field m_Material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material,
                      put = __cordl_internal_set_m_Material))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* m_Material;

  /// @brief Field m_Material_keys, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material_keys, put = __cordl_internal_set_m_Material_keys))::System::Collections::Generic::List_1<::StringW>* m_Material_keys;

  /// @brief Field m_Material_values, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material_values,
                      put = __cordl_internal_set_m_Material_values))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* m_Material_values;

  /// @brief Field m_String, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_String, put = __cordl_internal_set_m_String))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_String;

  /// @brief Field m_String_keys, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_String_keys, put = __cordl_internal_set_m_String_keys))::System::Collections::Generic::List_1<::StringW>* m_String_keys;

  /// @brief Field m_String_values, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_String_values, put = __cordl_internal_set_m_String_values))::System::Collections::Generic::List_1<::StringW>* m_String_values;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept;

  /// @brief Method Clear, addr 0x3082d2c, size 0xe0, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DeleteKey, addr 0x30822b0, size 0x234, virtual false, abstract: false, final false
  inline void DeleteKey(::StringW key);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Get(::StringW key, T fallback);

  /// @brief Method GetBool, addr 0x30824e4, size 0x88, virtual false, abstract: false, final false
  inline bool GetBool(::StringW key, bool fallback);

  /// @brief Method GetBoolDictionary, addr 0x3082cfc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* GetBoolDictionary();

  /// @brief Method GetColor, addr 0x30826e0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW key, ::UnityEngine::Color fallback);

  /// @brief Method GetColorDictionary, addr 0x3082d1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* GetColorDictionary();

  /// @brief Method GetFloat, addr 0x30825e8, size 0x7c, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW key, float_t fallback);

  /// @brief Method GetFloatDictionary, addr 0x3082d0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* GetFloatDictionary();

  /// @brief Method GetInt, addr 0x308256c, size 0x7c, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW key, int32_t fallback);

  /// @brief Method GetIntDictionary, addr 0x3082d04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* GetIntDictionary();

  /// @brief Method GetMaterial, addr 0x3082788, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::StringW key, ::UnityEngine::Material* fallback);

  /// @brief Method GetMaterialDictionary, addr 0x3082d24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* GetMaterialDictionary();

  /// @brief Method GetString, addr 0x3082664, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GetString(::StringW key, ::StringW fallback);

  /// @brief Method GetStringDictionary, addr 0x3082d14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetStringDictionary();

  /// @brief Method HasKey, addr 0x308216c, size 0x144, virtual false, abstract: false, final false
  inline bool HasKey(::StringW key);

  /// @brief Method HasKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool HasKey(::StringW key);

  static inline ::UnityEngine::ProBuilder::PreferenceDictionary* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x3081ca0, size 0x3c8, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x308198c, size 0x314, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Set(::StringW key, T value);

  /// @brief Method SetBool, addr 0x3082804, size 0xcc, virtual false, abstract: false, final false
  inline void SetBool(::StringW key, bool value);

  /// @brief Method SetColor, addr 0x3082b34, size 0xfc, virtual false, abstract: false, final false
  inline void SetColor(::StringW key, ::UnityEngine::Color value);

  /// @brief Method SetDefaultValues, addr 0x3082068, size 0x104, virtual true, abstract: false, final true
  inline void SetDefaultValues();

  /// @brief Method SetFloat, addr 0x308299c, size 0xcc, virtual false, abstract: false, final false
  inline void SetFloat(::StringW key, float_t value);

  /// @brief Method SetInt, addr 0x30828d0, size 0xcc, virtual false, abstract: false, final false
  inline void SetInt(::StringW key, int32_t value);

  /// @brief Method SetMaterial, addr 0x3082c30, size 0xcc, virtual false, abstract: false, final false
  inline void SetMaterial(::StringW key, ::UnityEngine::Material* value);

  /// @brief Method SetString, addr 0x3082a68, size 0xcc, virtual false, abstract: false, final false
  inline void SetString(::StringW key, ::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __cordl_internal_get_m_Bool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __cordl_internal_get_m_Bool() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Bool_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Bool_keys() const;

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_m_Bool_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __cordl_internal_get_m_Bool_values() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*& __cordl_internal_get_m_Color();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*> const& __cordl_internal_get_m_Color() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Color_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Color_keys() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_m_Color_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color>*> const& __cordl_internal_get_m_Color_values() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __cordl_internal_get_m_Float();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const& __cordl_internal_get_m_Float() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Float_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Float_keys() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_Float_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __cordl_internal_get_m_Float_values() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_m_Int();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get_m_Int() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Int_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Int_keys() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_Int_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_Int_values() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_m_Material();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_m_Material() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Material_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Material_keys() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_m_Material_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_m_Material_values() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_m_String();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_m_String() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_String_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_String_keys() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_String_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_String_values() const;

  constexpr void __cordl_internal_set_m_Bool(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_m_Bool_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Bool_values(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_m_Color(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_m_Color_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Color_values(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_m_Float(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  constexpr void __cordl_internal_set_m_Float_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Float_values(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set_m_Int(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_m_Int_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Int_values(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Material(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_m_Material_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Material_values(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_m_String(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_m_String_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_String_values(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3082e0c, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr ::UnityEngine::ProBuilder::IHasDefault* i___UnityEngine__ProBuilder__IHasDefault() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreferenceDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreferenceDictionary(PreferenceDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreferenceDictionary(PreferenceDictionary const&) = delete;

  /// @brief Field m_Bool, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, bool>* ___m_Bool;

  /// @brief Field m_Int, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___m_Int;

  /// @brief Field m_Float, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* ___m_Float;

  /// @brief Field m_String, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___m_String;

  /// @brief Field m_Color, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* ___m_Color;

  /// @brief Field m_Material, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* ___m_Material;

  /// @brief Field m_Bool_keys, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Bool_keys;

  /// @brief Field m_Int_keys, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Int_keys;

  /// @brief Field m_Float_keys, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Float_keys;

  /// @brief Field m_String_keys, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_String_keys;

  /// @brief Field m_Color_keys, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Color_keys;

  /// @brief Field m_Material_keys, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Material_keys;

  /// @brief Field m_Bool_values, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___m_Bool_values;

  /// @brief Field m_Int_values, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_Int_values;

  /// @brief Field m_Float_values, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___m_Float_values;

  /// @brief Field m_String_values, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_String_values;

  /// @brief Field m_Color_values, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color>* ___m_Color_values;

  /// @brief Field m_Material_values, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* ___m_Material_values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PreferenceDictionary, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Bool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Int) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Float) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_String) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Bool_keys) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Int_keys) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Float_keys) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_String_keys) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Color_keys) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Material_keys) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Bool_values) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Int_values) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Float_values) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_String_values) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Color_values) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PreferenceDictionary, ___m_Material_values) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::PreferenceDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PreferenceDictionary*, "UnityEngine.ProBuilder", "PreferenceDictionary");

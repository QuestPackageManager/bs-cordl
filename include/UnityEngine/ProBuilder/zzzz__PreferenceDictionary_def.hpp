#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PreferenceDictionary)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12151))
// CS Name: ::UnityEngine.ProBuilder::PreferenceDictionary*
class CORDL_TYPE PreferenceDictionary : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_Bool, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Bool, put = __set_m_Bool))::System::Collections::Generic::Dictionary_2<::StringW, bool>* m_Bool;

  /// @brief Field m_Int, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Int, put = __set_m_Int))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_Int;

  /// @brief Field m_Float, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Float, put = __set_m_Float))::System::Collections::Generic::Dictionary_2<::StringW, float_t>* m_Float;

  /// @brief Field m_String, offset 0x30, size 0x8
  __declspec(property(get = __get_m_String, put = __set_m_String))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_String;

  /// @brief Field m_Color, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Color, put = __set_m_Color))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* m_Color;

  /// @brief Field m_Material, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Material, put = __set_m_Material))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>* m_Material;

  /// @brief Field m_Bool_keys, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Bool_keys, put = __set_m_Bool_keys))::System::Collections::Generic::List_1<::StringW>* m_Bool_keys;

  /// @brief Field m_Int_keys, offset 0x50, size 0x8
  __declspec(property(get = __get_m_Int_keys, put = __set_m_Int_keys))::System::Collections::Generic::List_1<::StringW>* m_Int_keys;

  /// @brief Field m_Float_keys, offset 0x58, size 0x8
  __declspec(property(get = __get_m_Float_keys, put = __set_m_Float_keys))::System::Collections::Generic::List_1<::StringW>* m_Float_keys;

  /// @brief Field m_String_keys, offset 0x60, size 0x8
  __declspec(property(get = __get_m_String_keys, put = __set_m_String_keys))::System::Collections::Generic::List_1<::StringW>* m_String_keys;

  /// @brief Field m_Color_keys, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Color_keys, put = __set_m_Color_keys))::System::Collections::Generic::List_1<::StringW>* m_Color_keys;

  /// @brief Field m_Material_keys, offset 0x70, size 0x8
  __declspec(property(get = __get_m_Material_keys, put = __set_m_Material_keys))::System::Collections::Generic::List_1<::StringW>* m_Material_keys;

  /// @brief Field m_Bool_values, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Bool_values, put = __set_m_Bool_values))::System::Collections::Generic::List_1<bool>* m_Bool_values;

  /// @brief Field m_Int_values, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Int_values, put = __set_m_Int_values))::System::Collections::Generic::List_1<int32_t>* m_Int_values;

  /// @brief Field m_Float_values, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Float_values, put = __set_m_Float_values))::System::Collections::Generic::List_1<float_t>* m_Float_values;

  /// @brief Field m_String_values, offset 0x90, size 0x8
  __declspec(property(get = __get_m_String_values, put = __set_m_String_values))::System::Collections::Generic::List_1<::StringW>* m_String_values;

  /// @brief Field m_Color_values, offset 0x98, size 0x8
  __declspec(property(get = __get_m_Color_values, put = __set_m_Color_values))::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Color_values;

  /// @brief Field m_Material_values, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_Material_values, put = __set_m_Material_values))::System::Collections::Generic::List_1<::UnityEngine::Material*>* m_Material_values;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __get_m_Bool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __get_m_Bool() const;

  constexpr void __set_m_Bool(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get_m_Int();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get_m_Int() const;

  constexpr void __set_m_Int(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __get_m_Float();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const& __get_m_Float() const;

  constexpr void __set_m_Float(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get_m_String();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get_m_String() const;

  constexpr void __set_m_String(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*& __get_m_Color();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*> const& __get_m_Color() const;

  constexpr void __set_m_Color(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>*& __get_m_Material();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>*> const& __get_m_Material() const;

  constexpr void __set_m_Material(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Bool_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Bool_keys() const;

  constexpr void __set_m_Bool_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Int_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Int_keys() const;

  constexpr void __set_m_Int_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Float_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Float_keys() const;

  constexpr void __set_m_Float_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_String_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_String_keys() const;

  constexpr void __set_m_String_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Color_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Color_keys() const;

  constexpr void __set_m_Color_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Material_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Material_keys() const;

  constexpr void __set_m_Material_keys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<bool>*& __get_m_Bool_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __get_m_Bool_values() const;

  constexpr void __set_m_Bool_values(::System::Collections::Generic::List_1<bool>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_Int_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_Int_values() const;

  constexpr void __set_m_Int_values(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get_m_Float_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get_m_Float_values() const;

  constexpr void __set_m_Float_values(::System::Collections::Generic::List_1<float_t>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_String_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_String_values() const;

  constexpr void __set_m_String_values(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __get_m_Color_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color>*> const& __get_m_Color_values() const;

  constexpr void __set_m_Color_values(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& __get_m_Material_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Material*>*> const& __get_m_Material_values() const;

  constexpr void __set_m_Material_values(::System::Collections::Generic::List_1<::UnityEngine::Material*>* value);

  /// @brief Method OnBeforeSerialize addr 0x2b56064 size 0x314 virtual true final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize addr 0x2b56378 size 0x3c8 virtual true final true
  inline void OnAfterDeserialize();

  /// @brief Method SetDefaultValues addr 0x2b56740 size 0x104 virtual true final true
  inline void SetDefaultValues();

  /// @brief Method HasKey addr 0x2b56844 size 0x144 virtual false final false
  inline bool HasKey(::StringW key);

  /// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool HasKey(::StringW key);

  /// @brief Method DeleteKey addr 0x2b56988 size 0x234 virtual false final false
  inline void DeleteKey(::StringW key);

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T Get(::StringW key, T fallback);

  /// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void Set(::StringW key, T value);

  /// @brief Method GetBool addr 0x2b56bbc size 0x88 virtual false final false
  inline bool GetBool(::StringW key, bool fallback);

  /// @brief Method GetInt addr 0x2b56c44 size 0x7c virtual false final false
  inline int32_t GetInt(::StringW key, int32_t fallback);

  /// @brief Method GetFloat addr 0x2b56cc0 size 0x7c virtual false final false
  inline float_t GetFloat(::StringW key, float_t fallback);

  /// @brief Method GetString addr 0x2b56d3c size 0x7c virtual false final false
  inline ::StringW GetString(::StringW key, ::StringW fallback);

  /// @brief Method GetColor addr 0x2b56db8 size 0xa8 virtual false final false
  inline ::UnityEngine::Color GetColor(::StringW key, ::UnityEngine::Color fallback);

  /// @brief Method GetMaterial addr 0x2b56e60 size 0x7c virtual false final false
  inline ::UnityEngine::Material* GetMaterial(::StringW key, ::UnityEngine::Material* fallback);

  /// @brief Method SetBool addr 0x2b56edc size 0xcc virtual false final false
  inline void SetBool(::StringW key, bool value);

  /// @brief Method SetInt addr 0x2b56fa8 size 0xcc virtual false final false
  inline void SetInt(::StringW key, int32_t value);

  /// @brief Method SetFloat addr 0x2b57074 size 0xcc virtual false final false
  inline void SetFloat(::StringW key, float_t value);

  /// @brief Method SetString addr 0x2b57140 size 0xcc virtual false final false
  inline void SetString(::StringW key, ::StringW value);

  /// @brief Method SetColor addr 0x2b5720c size 0xfc virtual false final false
  inline void SetColor(::StringW key, ::UnityEngine::Color value);

  /// @brief Method SetMaterial addr 0x2b57308 size 0xcc virtual false final false
  inline void SetMaterial(::StringW key, ::UnityEngine::Material* value);

  /// @brief Method GetBoolDictionary addr 0x2b573d4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* GetBoolDictionary();

  /// @brief Method GetIntDictionary addr 0x2b573dc size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* GetIntDictionary();

  /// @brief Method GetFloatDictionary addr 0x2b573e4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* GetFloatDictionary();

  /// @brief Method GetStringDictionary addr 0x2b573ec size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetStringDictionary();

  /// @brief Method GetColorDictionary addr 0x2b573f4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* GetColorDictionary();

  /// @brief Method GetMaterialDictionary addr 0x2b573fc size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>* GetMaterialDictionary();

  /// @brief Method Clear addr 0x2b57404 size 0xe0 virtual false final false
  inline void Clear();

  static inline ::UnityEngine::ProBuilder::PreferenceDictionary* New_ctor();

  /// @brief Method .ctor addr 0x2b574e4 size 0x1d0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreferenceDictionary(PreferenceDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreferenceDictionary(PreferenceDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreferenceDictionary();

public:
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
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Material*>* ___m_Material;

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
  ::System::Collections::Generic::List_1<::UnityEngine::Material*>* ___m_Material_values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PreferenceDictionary, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::PreferenceDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PreferenceDictionary*, "UnityEngine.ProBuilder", "PreferenceDictionary");

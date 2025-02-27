#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValuePairPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
CORDL_MODULE_EXPORT(KeyValuePairPropertyBag_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class DelegateProperty_2;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2___c;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2;
}
namespace Unity::Properties {
template <typename TKey, typename TValue> class KeyValuePairPropertyBag_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValuePairPropertyBag_2);
MARK_GEN_REF_PTR_T(::Unity::Properties::KeyValuePairPropertyBag_2___c);
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValuePairPropertyBag`2/<>c<TKey,TValue>
class CORDL_TYPE KeyValuePairPropertyBag_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* __9;

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* New_ctor();

  /// @brief Method <.cctor>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey __cctor_b__7_0(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container);

  /// @brief Method <.cctor>b__7_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue __cctor_b__7_1(::ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairPropertyBag_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairPropertyBag_2___c(KeyValuePairPropertyBag_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairPropertyBag_2___c(KeyValuePairPropertyBag_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, Unity.Properties.PropertyBag`1<TContainer>
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.KeyValuePairPropertyBag`2<TKey,TValue>
class CORDL_TYPE KeyValuePairPropertyBag_2 : public ::Unity::Properties::PropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> {
public:
  // Declarations
  using __c = ::Unity::Properties::KeyValuePairPropertyBag_2___c<TKey, TValue>;

  /// @brief Field s_KeyProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeyProperty,
                      put = setStaticF_s_KeyProperty)) ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* s_KeyProperty;

  /// @brief Field s_ValueProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ValueProperty,
                      put = setStaticF_s_ValueProperty)) ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* s_ValueProperty;

  static inline ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* getStaticF_s_KeyProperty();

  static inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* getStaticF_s_ValueProperty();

  static inline void setStaticF_s_KeyProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* value);

  static inline void setStaticF_s_ValueProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairPropertyBag_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairPropertyBag_2(KeyValuePairPropertyBag_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairPropertyBag_2(KeyValuePairPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2, "Unity.Properties", "KeyValuePairPropertyBag`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2___c, "Unity.Properties", "KeyValuePairPropertyBag`2/<>c");

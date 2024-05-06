#pragma once
// IWYU pragma private; include "System/Dynamic/ExpandoClass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpandoClass)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Dynamic {
class ExpandoObject;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Dynamic {
class ExpandoClass;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::ExpandoClass);
// Type: System.Dynamic::ExpandoClass
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::ExpandoClass*
class CORDL_TYPE ExpandoClass : public ::System::Object {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Dynamic::ExpandoClass* Empty;

  __declspec(property(get = get_Keys))::ArrayW<::StringW, ::Array<::StringW>*> Keys;

  /// @brief Field _hashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Field _keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::ArrayW<::StringW, ::Array<::StringW>*> _keys;

  /// @brief Field _transitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transitions,
                      put = __cordl_internal_set__transitions))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* _transitions;

  /// @brief Method FindNewClass, addr 0x2c4ea90, size 0x400, virtual false, abstract: false, final false
  inline ::System::Dynamic::ExpandoClass* FindNewClass(::StringW newKey);

  /// @brief Method GetTransitionList, addr 0x2c4ee90, size 0x130, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::WeakReference*>* GetTransitionList(int32_t hashCode);

  /// @brief Method GetValueIndex, addr 0x2c4efc0, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetValueIndex(::StringW name, bool caseInsensitive, ::System::Dynamic::ExpandoObject* obj);

  /// @brief Method GetValueIndexCaseInsensitive, addr 0x2c4efd0, size 0x1b0, virtual false, abstract: false, final false
  inline int32_t GetValueIndexCaseInsensitive(::StringW name, ::System::Dynamic::ExpandoObject* obj);

  /// @brief Method GetValueIndexCaseSensitive, addr 0x2c4f180, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetValueIndexCaseSensitive(::StringW name);

  static inline ::System::Dynamic::ExpandoClass* New_ctor();

  static inline ::System::Dynamic::ExpandoClass* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, int32_t hashCode);

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__keys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__keys();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>*& __cordl_internal_get__transitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>*> const&
  __cordl_internal_get__transitions() const;

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  constexpr void __cordl_internal_set__keys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* value);

  /// @brief Method .ctor, addr 0x2c4e9c8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2c4ea60, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, int32_t hashCode);

  static inline ::System::Dynamic::ExpandoClass* getStaticF_Empty();

  /// @brief Method get_Keys, addr 0x2c4f29c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Keys();

  static inline void setStaticF_Empty(::System::Dynamic::ExpandoClass* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpandoClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpandoClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpandoClass(ExpandoClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpandoClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpandoClass(ExpandoClass const&) = delete;

  /// @brief Field _keys, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____keys;

  /// @brief Field _hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ____hashCode;

  /// @brief Field _transitions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* ____transitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::ExpandoClass, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoClass, ____keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoClass, ____hashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::ExpandoClass, ____transitions) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::ExpandoClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::ExpandoClass*, "System.Dynamic", "ExpandoClass");

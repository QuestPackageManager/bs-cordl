#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BidirectionalDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2);
// Type: Newtonsoft.Json.Utilities::BidirectionalDictionary`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TFirst, typename TSecond>
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::BidirectionalDictionary`2<TFirst,TSecond>*
class CORDL_TYPE BidirectionalDictionary_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _duplicateFirstErrorMessage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__duplicateFirstErrorMessage, put = __cordl_internal_set__duplicateFirstErrorMessage))::StringW _duplicateFirstErrorMessage;

  /// @brief Field _duplicateSecondErrorMessage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__duplicateSecondErrorMessage, put = __cordl_internal_set__duplicateSecondErrorMessage))::StringW _duplicateSecondErrorMessage;

  /// @brief Field _firstToSecond, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__firstToSecond, put = __cordl_internal_set__firstToSecond))::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* _firstToSecond;

  /// @brief Field _secondToFirst, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondToFirst, put = __cordl_internal_set__secondToFirst))::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* _secondToFirst;

  static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>* New_ctor();

  static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer);

  static inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                                    ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                                                                                                    ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(TFirst first, TSecond second);

  /// @brief Method TryGetByFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetByFirst(TFirst first, ByRef<TSecond> second);

  /// @brief Method TryGetBySecond, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetBySecond(TSecond second, ByRef<TFirst> first);

  constexpr ::StringW const& __cordl_internal_get__duplicateFirstErrorMessage() const;

  constexpr ::StringW& __cordl_internal_get__duplicateFirstErrorMessage();

  constexpr ::StringW const& __cordl_internal_get__duplicateSecondErrorMessage() const;

  constexpr ::StringW& __cordl_internal_get__duplicateSecondErrorMessage();

  constexpr ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*& __cordl_internal_get__firstToSecond();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*> const& __cordl_internal_get__firstToSecond() const;

  constexpr ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*& __cordl_internal_get__secondToFirst();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*> const& __cordl_internal_get__secondToFirst() const;

  constexpr void __cordl_internal_set__duplicateFirstErrorMessage(::StringW value);

  constexpr void __cordl_internal_set__duplicateSecondErrorMessage(::StringW value);

  constexpr void __cordl_internal_set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* value);

  constexpr void __cordl_internal_set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                    ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BidirectionalDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BidirectionalDictionary_2(BidirectionalDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BidirectionalDictionary_2(BidirectionalDictionary_2 const&) = delete;

  /// @brief Field _firstToSecond, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* ____firstToSecond;

  /// @brief Field _secondToFirst, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* ____secondToFirst;

  /// @brief Field _duplicateFirstErrorMessage, offset: 0x20, size: 0x8, def value: None
  ::StringW ____duplicateFirstErrorMessage;

  /// @brief Field _duplicateSecondErrorMessage, offset: 0x28, size: 0x8, def value: None
  ::StringW ____duplicateSecondErrorMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2, "Newtonsoft.Json.Utilities", "BidirectionalDictionary`2");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationInfoEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationInfoEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationInfoEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationInfoEnumerator);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationInfoEnumerator
class CORDL_TYPE SerializationInfoEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Runtime::Serialization::SerializationEntry Current;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ObjectType)) ::System::Type* ObjectType;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _currItem, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__currItem, put = __cordl_internal_set__currItem)) int32_t _currItem;

  /// @brief Field _current, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) bool _current;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _data;

  /// @brief Field _members, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__members, put = __cordl_internal_set__members)) ::ArrayW<::StringW, ::Array<::StringW>*> _members;

  /// @brief Field _numItems, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__numItems, put = __cordl_internal_set__numItems)) int32_t _numItems;

  /// @brief Field _types, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__types, put = __cordl_internal_set__types)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _types;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x59987ec, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Runtime::Serialization::SerializationInfoEnumerator* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> members, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> info,
                                                                                        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, int32_t numItems);

  /// @brief Method Reset, addr 0x599be18, size 0x10, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x599bdb4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get__currItem() const;

  constexpr int32_t& __cordl_internal_get__currItem();

  constexpr bool const& __cordl_internal_get__current() const;

  constexpr bool& __cordl_internal_get__current();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__data();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__members() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__members();

  constexpr int32_t const& __cordl_internal_get__numItems() const;

  constexpr int32_t& __cordl_internal_get__numItems();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__types() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__types();

  constexpr void __cordl_internal_set__currItem(int32_t value);

  constexpr void __cordl_internal_set__current(bool value);

  constexpr void __cordl_internal_set__data(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__members(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__numItems(int32_t value);

  constexpr void __cordl_internal_set__types(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x599bd98, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> members, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> info, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                    int32_t numItems);

  /// @brief Method get_Current, addr 0x5998240, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationEntry get_Current();

  /// @brief Method get_Name, addr 0x599be28, size 0x84, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ObjectType, addr 0x599bf30, size 0x84, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method get_Value, addr 0x599beac, size 0x84, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationInfoEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationInfoEnumerator(SerializationInfoEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationInfoEnumerator(SerializationInfoEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3216 };

  /// @brief Field _members, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____members;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____data;

  /// @brief Field _types, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____types;

  /// @brief Field _numItems, offset: 0x28, size: 0x4, def value: None
  int32_t ____numItems;

  /// @brief Field _currItem, offset: 0x2c, size: 0x4, def value: None
  int32_t ____currItem;

  /// @brief Field _current, offset: 0x30, size: 0x1, def value: None
  bool ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____members) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____types) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____numItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____currItem) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfoEnumerator, ____current) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationInfoEnumerator, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationInfoEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationInfoEnumerator*, "System.Runtime.Serialization", "SerializationInfoEnumerator");

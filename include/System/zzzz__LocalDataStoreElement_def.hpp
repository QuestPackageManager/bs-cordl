#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStoreElement)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class LocalDataStoreElement;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStoreElement);
// Type: System::LocalDataStoreElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2542))
// CS Name: ::System::LocalDataStoreElement*
class CORDL_TYPE LocalDataStoreElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_value, offset 0x10, size 0x8
  __declspec(property(get = __get_m_value, put = __set_m_value))::System::Object* m_value;

  /// @brief Field m_cookie, offset 0x18, size 0x8
  __declspec(property(get = __get_m_cookie, put = __set_m_cookie)) int64_t m_cookie;

  __declspec(property(get = get_Value, put = set_Value))::System::Object* Value;

  __declspec(property(get = get_Cookie)) int64_t Cookie;

  constexpr ::System::Object*& __get_m_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_value() const;

  constexpr void __set_m_value(::System::Object* value);

  constexpr int64_t& __get_m_cookie();

  constexpr int64_t const& __get_m_cookie() const;

  constexpr void __set_m_cookie(int64_t value);

  static inline ::System::LocalDataStoreElement* New_ctor(int64_t cookie);

  /// @brief Method .ctor, addr 0x25d7c04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t cookie);

  /// @brief Method get_Value, addr 0x25d7c2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method set_Value, addr 0x25d7c34, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Object* value);

  /// @brief Method get_Cookie, addr 0x25d7c3c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Cookie();

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStoreElement(LocalDataStoreElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStoreElement(LocalDataStoreElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStoreElement();

public:
  /// @brief Field m_value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___m_value;

  /// @brief Field m_cookie, offset: 0x18, size: 0x8, def value: None
  int64_t ___m_cookie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::LocalDataStoreElement, ___m_value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::LocalDataStoreElement, ___m_cookie) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStoreElement);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreElement*, "System", "LocalDataStoreElement");

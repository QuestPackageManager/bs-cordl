#pragma once
// IWYU pragma private; include "System/CharEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharEnumerator)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class CharEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::CharEnumerator);
// Type: System::CharEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::CharEnumerator*
class CORDL_TYPE CharEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) char16_t Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _currentElement, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get__currentElement, put = __cordl_internal_set__currentElement)) char16_t _currentElement;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__str, put = __cordl_internal_set__str))::StringW _str;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clone, addr 0x28bbd60, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Dispose, addr 0x28bbdbc, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x28bbd68, size 0x54, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::CharEnumerator* New_ctor();

  static inline ::System::CharEnumerator* New_ctor(::StringW str);

  /// @brief Method Reset, addr 0x28bbedc, size 0x10, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x28bbdd4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr char16_t const& __cordl_internal_get__currentElement() const;

  constexpr char16_t& __cordl_internal_get__currentElement();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::StringW const& __cordl_internal_get__str() const;

  constexpr ::StringW& __cordl_internal_get__str();

  constexpr void __cordl_internal_set__currentElement(char16_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__str(::StringW value);

  /// @brief Method .ctor, addr 0x28bbeec, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x28bbd30, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method get_Current, addr 0x28bbe38, size 0xa4, virtual true, abstract: false, final true
  inline char16_t get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharEnumerator(CharEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharEnumerator(CharEnumerator const&) = delete;

  /// @brief Field _str, offset: 0x10, size: 0x8, def value: None
  ::StringW ____str;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _currentElement, offset: 0x1c, size: 0x2, def value: None
  char16_t ____currentElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CharEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::CharEnumerator, ____str) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::CharEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::CharEnumerator, ____currentElement) == 0x1c, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::CharEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::CharEnumerator*, "System", "CharEnumerator");

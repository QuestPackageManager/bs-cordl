#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UndoRedoBuffer_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class UndoRedoBuffer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::UndoRedoBuffer_1);
// Type: ::UndoRedoBuffer`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14382))
// CS Name: ::UndoRedoBuffer`1<T>*
class CORDL_TYPE UndoRedoBuffer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::System::Collections::Generic::List_1<T>* _data;

  /// @brief Field _capacity, offset 0x18, size 0x4
  __declspec(property(get = __get__capacity, put = __set__capacity)) int32_t _capacity;

  /// @brief Field _cursor, offset 0x1c, size 0x4
  __declspec(property(get = __get__cursor, put = __set__cursor)) int32_t _cursor;

  constexpr ::System::Collections::Generic::List_1<T>*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get__data() const;

  constexpr void __set__data(::System::Collections::Generic::List_1<T>* value);

  constexpr int32_t& __get__capacity();

  constexpr int32_t const& __get__capacity() const;

  constexpr void __set__capacity(int32_t value);

  constexpr int32_t& __get__cursor();

  constexpr int32_t const& __get__cursor() const;

  constexpr void __set__cursor(int32_t value);

  static inline ::GlobalNamespace::UndoRedoBuffer_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method Undo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Undo();

  /// @brief Method Redo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Redo();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UndoRedoBuffer_1(UndoRedoBuffer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UndoRedoBuffer_1(UndoRedoBuffer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UndoRedoBuffer_1();

public:
  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____data;

  /// @brief Field _capacity, offset: 0x18, size: 0x4, def value: None
  int32_t ____capacity;

  /// @brief Field _cursor, offset: 0x1c, size: 0x4, def value: None
  int32_t ____cursor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::UndoRedoBuffer_1, "", "UndoRedoBuffer`1");

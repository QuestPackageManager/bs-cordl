#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionString)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString___buffer_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString___buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer);
// Type: ::<buffer>e__FixedBuffer
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6528))
// CS Name: ::IMECompositionString::<buffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __IMECompositionString___buffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr __IMECompositionString___buffer_e__FixedBuffer(char16_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMECompositionString___buffer_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  char16_t FixedElementField;

  /// @brief Size padding 0x80 - 0x2 = 0x7e, packed as 0x7e
  uint8_t _cordl_size_padding[0x7e];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::IMECompositionString
// SizeInfo { instance_size: 132, native_size: 132, calculated_instance_size: 132, calculated_native_size: 148, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0)
// }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6529))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IMECompositionString
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionString {
public:
  // Declarations
  using _buffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer;

  using Enumerator = ::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator;

  /// @brief Field size, offset 0x0, size 0x4
  __declspec(property(get = __get_size, put = __set_size)) int32_t size;

  /// @brief Field buffer, offset 0x4, size 0x80
  __declspec(property(get = __get_buffer, put = __set_buffer))::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer buffer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) char16_t Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  constexpr int32_t& __get_size();

  constexpr int32_t const& __get_size() const;

  constexpr void __set_size(int32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer& __get_buffer();

  constexpr ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer const& __get_buffer() const;

  constexpr void __set_buffer(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer value);

  /// @brief Method get_Count, addr 0x2ae9ee0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2ae9ee8, size 0x70, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t index);

  /// @brief Method .ctor, addr 0x2ae9e60, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW characters);

  /// @brief Method ToString, addr 0x2ae9f58, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetEnumerator, addr 0x2ae9f70, size 0x94, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2aea028, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr IMECompositionString(int32_t size, ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer buffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionString();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___size_padding[0x0];
      /// @brief Field size, offset: 0x0, size: 0x4, def value: None
      int32_t ___size;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___size_padding_forAlignment[0x0];
      /// @brief Field size, offset: 0x0, size: 0x4, def value: None
      int32_t ___size_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___buffer_padding[0x4];
      /// @brief Field buffer, offset: 0x4, size: 0x80, def value: None
      ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer ___buffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___buffer_padding_forAlignment[0x4];
      /// @brief Field buffer, offset: 0x4, size: 0x80, def value: None
      ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer ___buffer_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionString, 0x84>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::Enumerator
// SizeInfo { instance_size: 140, native_size: 140, calculated_instance_size: 140, calculated_native_size: 156, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6529))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6527))
// CS Name: ::IMECompositionString::Enumerator
struct CORDL_TYPE __IMECompositionString__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) char16_t Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<char16_t>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x2aea004, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString);

  /// @brief Method MoveNext, addr 0x2aea02c, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2aea060, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Dispose, addr 0x2aea06c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_Current, addr 0x2aea070, size 0x8, virtual true, abstract: false, final true
  inline char16_t get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aea078, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_CompositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }, CppParam { name: "m_CurrentCharacter",
  // ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IMECompositionString__Enumerator(::UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString, char16_t m_CurrentCharacter, int32_t m_CurrentIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMECompositionString__Enumerator();

  /// @brief Field m_CompositionString, offset: 0x0, size: 0x84, def value: None
  ::UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString;

  /// @brief Field m_CurrentCharacter, offset: 0x84, size: 0x2, def value: None
  char16_t m_CurrentCharacter;

  /// @brief Field m_CurrentIndex, offset: 0x88, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, 0x8c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, m_CompositionString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, m_CurrentCharacter) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, m_CurrentIndex) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionString, "UnityEngine.InputSystem.LowLevel", "IMECompositionString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/<buffer>e__FixedBuffer");

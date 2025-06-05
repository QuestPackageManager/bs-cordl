#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionString)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString__buffer_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString__buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionString__buffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionString__buffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr IMECompositionString__buffer_e__FixedBuffer(char16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6938 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  char16_t FixedElementField;

  /// @brief Size padding 0x80 - 0x2 = 0x7e, packed as 0x7e
  uint8_t _cordl_size_padding[0x7e];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, UnityEngine.InputSystem.LowLevel.IMECompositionString::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionString {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator;

  using _buffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) char16_t Item[];

  /// @brief Field buffer, offset 0x4, size 0x80
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer buffer;

  /// @brief Field size, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x460a270, size 0x94, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x460a328, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToString, addr 0x460a258, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer const& __cordl_internal_get_buffer() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_buffer(::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x460a164, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW characters);

  /// @brief Method get_Count, addr 0x460a1e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x460a1ec, size 0x6c, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionString();

  // Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr IMECompositionString(int32_t size, ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer buffer) noexcept;

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
      ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer ___buffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___buffer_padding_forAlignment[0x4];
      /// @brief Field buffer, offset: 0x4, size: 0x80, def value: None
      ::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer ___buffer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionString, 0x84>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, UnityEngine.InputSystem.LowLevel.IMECompositionString
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct CORDL_TYPE IMECompositionString_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) char16_t Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<char16_t>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x460a368, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x460a32c, size 0x30, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x460a35c, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x460a374, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x460a304, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString);

  /// @brief Method get_Current, addr 0x460a36c, size 0x8, virtual true, abstract: false, final true
  inline char16_t get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionString_Enumerator();

  // Ctor Parameters [CppParam { name: "m_CompositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }, CppParam { name: "m_CurrentCharacter",
  // ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IMECompositionString_Enumerator(::UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString, char16_t m_CurrentCharacter, int32_t m_CurrentIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6937 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  /// @brief Field m_CompositionString, offset: 0x0, size: 0x84, def value: None
  ::UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString;

  /// @brief Field m_CurrentCharacter, offset: 0x84, size: 0x2, def value: None
  char16_t m_CurrentCharacter;

  /// @brief Field m_CurrentIndex, offset: 0x88, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator, m_CompositionString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator, m_CurrentCharacter) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator, m_CurrentIndex) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator, 0x8c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionString, "UnityEngine.InputSystem.LowLevel", "IMECompositionString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionString_Enumerator, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/<buffer>e__FixedBuffer");

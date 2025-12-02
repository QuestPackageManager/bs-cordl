#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDescriptor)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Diagnostics::EventDescriptor);
// Dependencies
namespace System::Runtime::Diagnostics {
// Is value type: true
// CS Name: System.Runtime.Diagnostics.EventDescriptor
#pragma pack(push, 0)
struct CORDL_TYPE EventDescriptor {
public:
  // Declarations
  __declspec(property(get = get_Channel)) uint8_t Channel;

  __declspec(property(get = get_EventId)) int32_t EventId;

  __declspec(property(get = get_Keywords)) int64_t Keywords;

  __declspec(property(get = get_Level)) uint8_t Level;

  __declspec(property(get = get_Opcode)) uint8_t Opcode;

  /// @brief Field m_channel, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_m_channel, put = __cordl_internal_set_m_channel)) uint8_t m_channel;

  /// @brief Field m_id, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_m_id, put = __cordl_internal_set_m_id)) uint16_t m_id;

  /// @brief Field m_keywords, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_keywords, put = __cordl_internal_set_m_keywords)) int64_t m_keywords;

  /// @brief Field m_level, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_level, put = __cordl_internal_set_m_level)) uint8_t m_level;

  /// @brief Field m_opcode, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_opcode, put = __cordl_internal_set_m_opcode)) uint8_t m_opcode;

  /// @brief Field m_task, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_m_task, put = __cordl_internal_set_m_task)) uint16_t m_task;

  /// @brief Field m_version, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) uint8_t m_version;

  /// @brief Method Equals, addr 0x5f74b84, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5f74c04, size 0x74, virtual false, abstract: false, final false
  inline bool Equals(::System::Runtime::Diagnostics::EventDescriptor other);

  /// @brief Method GetHashCode, addr 0x5f74c78, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  constexpr uint8_t const& __cordl_internal_get_m_channel() const;

  constexpr uint8_t& __cordl_internal_get_m_channel();

  constexpr uint16_t const& __cordl_internal_get_m_id() const;

  constexpr uint16_t& __cordl_internal_get_m_id();

  constexpr int64_t const& __cordl_internal_get_m_keywords() const;

  constexpr int64_t& __cordl_internal_get_m_keywords();

  constexpr uint8_t const& __cordl_internal_get_m_level() const;

  constexpr uint8_t& __cordl_internal_get_m_level();

  constexpr uint8_t const& __cordl_internal_get_m_opcode() const;

  constexpr uint8_t& __cordl_internal_get_m_opcode();

  constexpr uint16_t const& __cordl_internal_get_m_task() const;

  constexpr uint16_t& __cordl_internal_get_m_task();

  constexpr uint8_t const& __cordl_internal_get_m_version() const;

  constexpr uint8_t& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_channel(uint8_t value);

  constexpr void __cordl_internal_set_m_id(uint16_t value);

  constexpr void __cordl_internal_set_m_keywords(int64_t value);

  constexpr void __cordl_internal_set_m_level(uint8_t value);

  constexpr void __cordl_internal_set_m_opcode(uint8_t value);

  constexpr void __cordl_internal_set_m_task(uint16_t value);

  constexpr void __cordl_internal_set_m_version(uint8_t value);

  /// @brief Method .ctor, addr 0x5f6d578, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(int32_t id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int32_t task, int64_t keywords);

  /// @brief Method get_Channel, addr 0x5f74b64, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Channel();

  /// @brief Method get_EventId, addr 0x5f74b5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EventId();

  /// @brief Method get_Keywords, addr 0x5f74b7c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Keywords();

  /// @brief Method get_Level, addr 0x5f74b6c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Level();

  /// @brief Method get_Opcode, addr 0x5f74b74, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Opcode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDescriptor();

  // Ctor Parameters [CppParam { name: "m_id", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_version", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_level", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_opcode", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_task", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_keywords", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr EventDescriptor(uint16_t m_id, uint8_t m_version, uint8_t m_channel, uint8_t m_level, uint8_t m_opcode, uint16_t m_task, int64_t m_keywords) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_id_padding[0x0];
      /// @brief Field m_id, offset: 0x0, size: 0x2, def value: None
      uint16_t ___m_id;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_id_padding_forAlignment[0x0];
      /// @brief Field m_id, offset: 0x0, size: 0x2, def value: None
      uint16_t ___m_id_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___m_version_padding[0x2];
      /// @brief Field m_version, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_version;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___m_version_padding_forAlignment[0x2];
      /// @brief Field m_version, offset: 0x2, size: 0x1, def value: None
      uint8_t ___m_version_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___m_channel_padding[0x3];
      /// @brief Field m_channel, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_channel;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___m_channel_padding_forAlignment[0x3];
      /// @brief Field m_channel, offset: 0x3, size: 0x1, def value: None
      uint8_t ___m_channel_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_level_padding[0x4];
      /// @brief Field m_level, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_level;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_level_padding_forAlignment[0x4];
      /// @brief Field m_level, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_level_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___m_opcode_padding[0x5];
      /// @brief Field m_opcode, offset: 0x5, size: 0x1, def value: None
      uint8_t ___m_opcode;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___m_opcode_padding_forAlignment[0x5];
      /// @brief Field m_opcode, offset: 0x5, size: 0x1, def value: None
      uint8_t ___m_opcode_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___m_task_padding[0x6];
      /// @brief Field m_task, offset: 0x6, size: 0x2, def value: None
      uint16_t ___m_task;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___m_task_padding_forAlignment[0x6];
      /// @brief Field m_task, offset: 0x6, size: 0x2, def value: None
      uint16_t ___m_task_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_keywords_padding[0x8];
      /// @brief Field m_keywords, offset: 0x8, size: 0x8, def value: None
      int64_t ___m_keywords;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_keywords_padding_forAlignment[0x8];
      /// @brief Field m_keywords, offset: 0x8, size: 0x8, def value: None
      int64_t ___m_keywords_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21106 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EventDescriptor, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EventDescriptor, "System.Runtime.Diagnostics", "EventDescriptor");

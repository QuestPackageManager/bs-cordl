#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ObjectId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectId)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct ObjectId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::ObjectId);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::ObjectId, "UnityEngine.Timeline", "ObjectId");
// Dependencies UnityEngine.EntityId
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.ObjectId
struct CORDL_TYPE ObjectId {
public:
  // Declarations
  /// @brief Field InvalidId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_InvalidId, put = setStaticF_InvalidId)) ::UnityEngine::Timeline::ObjectId InvalidId;

  /// @brief Field m_Data, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::UnityEngine::EntityId m_Data;

  /// @brief Field m_IntData, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntData, put = __cordl_internal_set_m_IntData)) int32_t m_IntData;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Timeline::ObjectId>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Timeline::ObjectId>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Timeline::ObjectId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Timeline::ObjectId>*();

  /// @brief Method CompareTo, addr 0x6defd18, size 0x14, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Timeline::ObjectId other);

  /// @brief Method Equals, addr 0x6defc80, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6defd08, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Timeline::ObjectId other);

  /// @brief Method GetHashCode, addr 0x6defe2c, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  constexpr ::UnityEngine::EntityId const& __cordl_internal_get_m_Data() const;

  constexpr ::UnityEngine::EntityId& __cordl_internal_get_m_Data();

  constexpr int32_t const& __cordl_internal_get_m_IntData() const;

  constexpr int32_t& __cordl_internal_get_m_IntData();

  constexpr void __cordl_internal_set_m_Data(::UnityEngine::EntityId value);

  constexpr void __cordl_internal_set_m_IntData(int32_t value);

  /// @brief Method .ctor, addr 0x6defc6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EntityId data);

  static inline ::UnityEngine::Timeline::ObjectId getStaticF_InvalidId();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Timeline::ObjectId>"
  constexpr ::System::IComparable_1<::UnityEngine::Timeline::ObjectId>* i___System__IComparable_1___UnityEngine__Timeline__ObjectId_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Timeline::ObjectId>"
  constexpr ::System::IEquatable_1<::UnityEngine::Timeline::ObjectId>* i___System__IEquatable_1___UnityEngine__Timeline__ObjectId_();

  /// @brief Method op_Equality, addr 0x6defd2c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  /// @brief Method op_GreaterThan, addr 0x6defe08, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6defe20, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  /// @brief Method op_Implicit, addr 0x6defc74, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::EntityId op_Implicit___UnityEngine__EntityId(::UnityEngine::Timeline::ObjectId objectId);

  /// @brief Method op_Implicit, addr 0x6def7b4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::ObjectId op_Implicit___UnityEngine__Timeline__ObjectId(::UnityEngine::EntityId entityId);

  /// @brief Method op_Implicit, addr 0x6defc7c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::ObjectId op_Implicit___UnityEngine__Timeline__ObjectId(int32_t instanceId);

  /// @brief Method op_Implicit, addr 0x6defc78, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::Timeline::ObjectId objectId);

  /// @brief Method op_Inequality, addr 0x6defd94, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  /// @brief Method op_LessThan, addr 0x6defdfc, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  /// @brief Method op_LessThanOrEqual, addr 0x6defe14, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::UnityEngine::Timeline::ObjectId left, ::UnityEngine::Timeline::ObjectId right);

  static inline void setStaticF_InvalidId(::UnityEngine::Timeline::ObjectId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectId();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IntData", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }]
  constexpr ObjectId(::UnityEngine::EntityId m_Data, int32_t m_IntData) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Data_padding[0x0];
      /// [SerializeField]
      /// @brief Field m_Data, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::EntityId ___m_Data;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Data_padding_forAlignment[0x0];
      /// [SerializeField]
      /// @brief Field m_Data, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::EntityId ___m_Data_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_IntData_padding[0x0];
      /// @brief Field m_IntData, offset: 0x0, size: 0x4, def value: None
      int32_t ___m_IntData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_IntData_padding_forAlignment[0x0];
      /// @brief Field m_IntData, offset: 0x0, size: 0x4, def value: None
      int32_t ___m_IntData_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::ObjectId) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Timeline

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VertexAttributeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexAttributeDescriptor)
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VertexAttributeDescriptor);
// Dependencies System.IEquatable`1<T>, UnityEngine.Rendering.VertexAttribute, UnityEngine.Rendering.VertexAttributeFormat
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VertexAttributeDescriptor
struct CORDL_TYPE VertexAttributeDescriptor {
public:
  // Declarations
  __declspec(property(get = get_attribute, put = set_attribute)) ::UnityEngine::Rendering::VertexAttribute attribute;

  __declspec(property(get = get_dimension, put = set_dimension)) int32_t dimension;

  __declspec(property(get = get_format, put = set_format)) ::UnityEngine::Rendering::VertexAttributeFormat format;

  __declspec(property(get = get_stream, put = set_stream)) int32_t stream;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*();

  /// @brief Method Equals, addr 0x48c4234, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x48c42dc, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VertexAttributeDescriptor other);

  /// @brief Method GetHashCode, addr 0x48c420c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x48c4038, size 0x1d4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x48c402c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::VertexAttribute attribute, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dimension, int32_t stream);

  /// @brief Method get_attribute, addr 0x48c3fec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttribute get_attribute();

  /// @brief Method get_dimension, addr 0x48c400c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_dimension();

  /// @brief Method get_format, addr 0x48c3ffc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat get_format();

  /// @brief Method get_stream, addr 0x48c401c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stream();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* i___System__IEquatable_1___UnityEngine__Rendering__VertexAttributeDescriptor_();

  /// @brief Method set_attribute, addr 0x48c3ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_attribute(::UnityEngine::Rendering::VertexAttribute value);

  /// @brief Method set_dimension, addr 0x48c4014, size 0x8, virtual false, abstract: false, final false
  inline void set_dimension(int32_t value);

  /// @brief Method set_format, addr 0x48c4004, size 0x8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::Rendering::VertexAttributeFormat value);

  /// @brief Method set_stream, addr 0x48c4024, size 0x8, virtual false, abstract: false, final false
  inline void set_stream(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexAttributeDescriptor();

  // Ctor Parameters [CppParam { name: "_attribute_k__BackingField", ty: "::UnityEngine::Rendering::VertexAttribute", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty:
  // "::UnityEngine::Rendering::VertexAttributeFormat", modifiers: "", def_value: None }, CppParam { name: "_dimension_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_stream_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexAttributeDescriptor(::UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField, ::UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField,
                                      int32_t _dimension_k__BackingField, int32_t _stream_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11200 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <attribute>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField;

  /// @brief Field <format>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField;

  /// @brief Field <dimension>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _dimension_k__BackingField;

  /// @brief Field <stream>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _stream_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VertexAttributeDescriptor, _attribute_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VertexAttributeDescriptor, _format_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VertexAttributeDescriptor, _dimension_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VertexAttributeDescriptor, _stream_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttributeDescriptor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");

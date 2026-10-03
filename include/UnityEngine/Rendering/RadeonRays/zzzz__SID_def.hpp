#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/SID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SID)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class SID;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::SID*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::SID*, "UnityEngine.Rendering.RadeonRays", "SID");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.SID
class CORDL_TYPE SID : public ::System::Object {
public:
  // Declarations
  /// @brief Field g_aabb_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_aabb_offset, put = setStaticF_g_aabb_offset)) int32_t g_aabb_offset;

  /// @brief Field g_base_index, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_base_index, put = setStaticF_g_base_index)) int32_t g_base_index;

  /// @brief Field g_bottom_bvhs, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bottom_bvhs, put = setStaticF_g_bottom_bvhs)) int32_t g_bottom_bvhs;

  /// @brief Field g_buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_buffer, put = setStaticF_g_buffer)) int32_t g_buffer;

  /// @brief Field g_bvh, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bvh, put = setStaticF_g_bvh)) int32_t g_bvh;

  /// @brief Field g_bvh_leaves, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bvh_leaves, put = setStaticF_g_bvh_leaves)) int32_t g_bvh_leaves;

  /// @brief Field g_bvh_leaves_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bvh_leaves_offset, put = setStaticF_g_bvh_leaves_offset)) int32_t g_bvh_leaves_offset;

  /// @brief Field g_bvh_node_count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bvh_node_count, put = setStaticF_g_bvh_node_count)) int32_t g_bvh_node_count;

  /// @brief Field g_bvh_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_bvh_offset, put = setStaticF_g_bvh_offset)) int32_t g_bvh_offset;

  /// @brief Field g_cluster_range_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_cluster_range_offset, put = setStaticF_g_cluster_range_offset)) int32_t g_cluster_range_offset;

  /// @brief Field g_cluster_to_node_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_cluster_to_node_offset, put = setStaticF_g_cluster_to_node_offset)) int32_t g_cluster_to_node_offset;

  /// @brief Field g_cluster_validity_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_cluster_validity_offset, put = setStaticF_g_cluster_validity_offset)) int32_t g_cluster_validity_offset;

  /// @brief Field g_constants_bit_shift, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_bit_shift, put = setStaticF_g_constants_bit_shift)) int32_t g_constants_bit_shift;

  /// @brief Field g_constants_input_keys_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_input_keys_offset, put = setStaticF_g_constants_input_keys_offset)) int32_t g_constants_input_keys_offset;

  /// @brief Field g_constants_min_prims_per_treelet, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_min_prims_per_treelet, put = setStaticF_g_constants_min_prims_per_treelet)) int32_t g_constants_min_prims_per_treelet;

  /// @brief Field g_constants_num_blocks, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_num_blocks, put = setStaticF_g_constants_num_blocks)) int32_t g_constants_num_blocks;

  /// @brief Field g_constants_num_keys, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_num_keys, put = setStaticF_g_constants_num_keys)) int32_t g_constants_num_keys;

  /// @brief Field g_constants_output_keys_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_output_keys_offset, put = setStaticF_g_constants_output_keys_offset)) int32_t g_constants_output_keys_offset;

  /// @brief Field g_constants_part_sums_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_part_sums_offset, put = setStaticF_g_constants_part_sums_offset)) int32_t g_constants_part_sums_offset;

  /// @brief Field g_constants_ray_count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_ray_count, put = setStaticF_g_constants_ray_count)) int32_t g_constants_ray_count;

  /// @brief Field g_constants_triangle_count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_triangle_count, put = setStaticF_g_constants_triangle_count)) int32_t g_constants_triangle_count;

  /// @brief Field g_constants_vertex_stride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_constants_vertex_stride, put = setStaticF_g_constants_vertex_stride)) int32_t g_constants_vertex_stride;

  /// @brief Field g_deltas_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_deltas_offset, put = setStaticF_g_deltas_offset)) int32_t g_deltas_offset;

  /// @brief Field g_group_histograms_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_group_histograms_offset, put = setStaticF_g_group_histograms_offset)) int32_t g_group_histograms_offset;

  /// @brief Field g_hits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_hits, put = setStaticF_g_hits)) int32_t g_hits;

  /// @brief Field g_indices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_indices, put = setStaticF_g_indices)) int32_t g_indices;

  /// @brief Field g_indices_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_indices_offset, put = setStaticF_g_indices_offset)) int32_t g_indices_offset;

  /// @brief Field g_input_keys_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_input_keys_offset, put = setStaticF_g_input_keys_offset)) int32_t g_input_keys_offset;

  /// @brief Field g_input_values_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_input_values_offset, put = setStaticF_g_input_values_offset)) int32_t g_input_values_offset;

  /// @brief Field g_instance_infos, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_instance_infos, put = setStaticF_g_instance_infos)) int32_t g_instance_infos;

  /// @brief Field g_internal_node_range_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_internal_node_range_offset, put = setStaticF_g_internal_node_range_offset)) int32_t g_internal_node_range_offset;

  /// @brief Field g_leaf_parents_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_leaf_parents_offset, put = setStaticF_g_leaf_parents_offset)) int32_t g_leaf_parents_offset;

  /// @brief Field g_morton_codes_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_morton_codes_offset, put = setStaticF_g_morton_codes_offset)) int32_t g_morton_codes_offset;

  /// @brief Field g_neighbor_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_neighbor_offset, put = setStaticF_g_neighbor_offset)) int32_t g_neighbor_offset;

  /// @brief Field g_output_keys_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_output_keys_offset, put = setStaticF_g_output_keys_offset)) int32_t g_output_keys_offset;

  /// @brief Field g_output_values_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_output_values_offset, put = setStaticF_g_output_values_offset)) int32_t g_output_values_offset;

  /// @brief Field g_primitive_counts_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_primitive_counts_offset, put = setStaticF_g_primitive_counts_offset)) int32_t g_primitive_counts_offset;

  /// @brief Field g_primitive_refs_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_primitive_refs_offset, put = setStaticF_g_primitive_refs_offset)) int32_t g_primitive_refs_offset;

  /// @brief Field g_ray_count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_ray_count, put = setStaticF_g_ray_count)) int32_t g_ray_count;

  /// @brief Field g_rays, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_rays, put = setStaticF_g_rays)) int32_t g_rays;

  /// @brief Field g_remainder_treelets, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_remainder_treelets, put = setStaticF_g_remainder_treelets)) int32_t g_remainder_treelets;

  /// @brief Field g_scratch_buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_scratch_buffer, put = setStaticF_g_scratch_buffer)) int32_t g_scratch_buffer;

  /// @brief Field g_sorted_prim_refs_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_sorted_prim_refs_offset, put = setStaticF_g_sorted_prim_refs_offset)) int32_t g_sorted_prim_refs_offset;

  /// @brief Field g_temp_indices_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_temp_indices_offset, put = setStaticF_g_temp_indices_offset)) int32_t g_temp_indices_offset;

  /// @brief Field g_trace_index_buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_trace_index_buffer, put = setStaticF_g_trace_index_buffer)) int32_t g_trace_index_buffer;

  /// @brief Field g_trace_vertex_buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_trace_vertex_buffer, put = setStaticF_g_trace_vertex_buffer)) int32_t g_trace_vertex_buffer;

  /// @brief Field g_trace_vertex_stride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_trace_vertex_stride, put = setStaticF_g_trace_vertex_stride)) int32_t g_trace_vertex_stride;

  /// @brief Field g_treelet_count_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_treelet_count_offset, put = setStaticF_g_treelet_count_offset)) int32_t g_treelet_count_offset;

  /// @brief Field g_treelet_dispatch_buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_treelet_dispatch_buffer, put = setStaticF_g_treelet_dispatch_buffer)) int32_t g_treelet_dispatch_buffer;

  /// @brief Field g_treelet_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_treelet_offset, put = setStaticF_g_treelet_offset)) int32_t g_treelet_offset;

  /// @brief Field g_treelet_roots_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_treelet_roots_offset, put = setStaticF_g_treelet_roots_offset)) int32_t g_treelet_roots_offset;

  /// @brief Field g_vertices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_vertices, put = setStaticF_g_vertices)) int32_t g_vertices;

  /// @brief Field g_vertices_offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_g_vertices_offset, put = setStaticF_g_vertices_offset)) int32_t g_vertices_offset;

  static inline int32_t getStaticF_g_aabb_offset();

  static inline int32_t getStaticF_g_base_index();

  static inline int32_t getStaticF_g_bottom_bvhs();

  static inline int32_t getStaticF_g_buffer();

  static inline int32_t getStaticF_g_bvh();

  static inline int32_t getStaticF_g_bvh_leaves();

  static inline int32_t getStaticF_g_bvh_leaves_offset();

  static inline int32_t getStaticF_g_bvh_node_count();

  static inline int32_t getStaticF_g_bvh_offset();

  static inline int32_t getStaticF_g_cluster_range_offset();

  static inline int32_t getStaticF_g_cluster_to_node_offset();

  static inline int32_t getStaticF_g_cluster_validity_offset();

  static inline int32_t getStaticF_g_constants_bit_shift();

  static inline int32_t getStaticF_g_constants_input_keys_offset();

  static inline int32_t getStaticF_g_constants_min_prims_per_treelet();

  static inline int32_t getStaticF_g_constants_num_blocks();

  static inline int32_t getStaticF_g_constants_num_keys();

  static inline int32_t getStaticF_g_constants_output_keys_offset();

  static inline int32_t getStaticF_g_constants_part_sums_offset();

  static inline int32_t getStaticF_g_constants_ray_count();

  static inline int32_t getStaticF_g_constants_triangle_count();

  static inline int32_t getStaticF_g_constants_vertex_stride();

  static inline int32_t getStaticF_g_deltas_offset();

  static inline int32_t getStaticF_g_group_histograms_offset();

  static inline int32_t getStaticF_g_hits();

  static inline int32_t getStaticF_g_indices();

  static inline int32_t getStaticF_g_indices_offset();

  static inline int32_t getStaticF_g_input_keys_offset();

  static inline int32_t getStaticF_g_input_values_offset();

  static inline int32_t getStaticF_g_instance_infos();

  static inline int32_t getStaticF_g_internal_node_range_offset();

  static inline int32_t getStaticF_g_leaf_parents_offset();

  static inline int32_t getStaticF_g_morton_codes_offset();

  static inline int32_t getStaticF_g_neighbor_offset();

  static inline int32_t getStaticF_g_output_keys_offset();

  static inline int32_t getStaticF_g_output_values_offset();

  static inline int32_t getStaticF_g_primitive_counts_offset();

  static inline int32_t getStaticF_g_primitive_refs_offset();

  static inline int32_t getStaticF_g_ray_count();

  static inline int32_t getStaticF_g_rays();

  static inline int32_t getStaticF_g_remainder_treelets();

  static inline int32_t getStaticF_g_scratch_buffer();

  static inline int32_t getStaticF_g_sorted_prim_refs_offset();

  static inline int32_t getStaticF_g_temp_indices_offset();

  static inline int32_t getStaticF_g_trace_index_buffer();

  static inline int32_t getStaticF_g_trace_vertex_buffer();

  static inline int32_t getStaticF_g_trace_vertex_stride();

  static inline int32_t getStaticF_g_treelet_count_offset();

  static inline int32_t getStaticF_g_treelet_dispatch_buffer();

  static inline int32_t getStaticF_g_treelet_offset();

  static inline int32_t getStaticF_g_treelet_roots_offset();

  static inline int32_t getStaticF_g_vertices();

  static inline int32_t getStaticF_g_vertices_offset();

  static inline void setStaticF_g_aabb_offset(int32_t value);

  static inline void setStaticF_g_base_index(int32_t value);

  static inline void setStaticF_g_bottom_bvhs(int32_t value);

  static inline void setStaticF_g_buffer(int32_t value);

  static inline void setStaticF_g_bvh(int32_t value);

  static inline void setStaticF_g_bvh_leaves(int32_t value);

  static inline void setStaticF_g_bvh_leaves_offset(int32_t value);

  static inline void setStaticF_g_bvh_node_count(int32_t value);

  static inline void setStaticF_g_bvh_offset(int32_t value);

  static inline void setStaticF_g_cluster_range_offset(int32_t value);

  static inline void setStaticF_g_cluster_to_node_offset(int32_t value);

  static inline void setStaticF_g_cluster_validity_offset(int32_t value);

  static inline void setStaticF_g_constants_bit_shift(int32_t value);

  static inline void setStaticF_g_constants_input_keys_offset(int32_t value);

  static inline void setStaticF_g_constants_min_prims_per_treelet(int32_t value);

  static inline void setStaticF_g_constants_num_blocks(int32_t value);

  static inline void setStaticF_g_constants_num_keys(int32_t value);

  static inline void setStaticF_g_constants_output_keys_offset(int32_t value);

  static inline void setStaticF_g_constants_part_sums_offset(int32_t value);

  static inline void setStaticF_g_constants_ray_count(int32_t value);

  static inline void setStaticF_g_constants_triangle_count(int32_t value);

  static inline void setStaticF_g_constants_vertex_stride(int32_t value);

  static inline void setStaticF_g_deltas_offset(int32_t value);

  static inline void setStaticF_g_group_histograms_offset(int32_t value);

  static inline void setStaticF_g_hits(int32_t value);

  static inline void setStaticF_g_indices(int32_t value);

  static inline void setStaticF_g_indices_offset(int32_t value);

  static inline void setStaticF_g_input_keys_offset(int32_t value);

  static inline void setStaticF_g_input_values_offset(int32_t value);

  static inline void setStaticF_g_instance_infos(int32_t value);

  static inline void setStaticF_g_internal_node_range_offset(int32_t value);

  static inline void setStaticF_g_leaf_parents_offset(int32_t value);

  static inline void setStaticF_g_morton_codes_offset(int32_t value);

  static inline void setStaticF_g_neighbor_offset(int32_t value);

  static inline void setStaticF_g_output_keys_offset(int32_t value);

  static inline void setStaticF_g_output_values_offset(int32_t value);

  static inline void setStaticF_g_primitive_counts_offset(int32_t value);

  static inline void setStaticF_g_primitive_refs_offset(int32_t value);

  static inline void setStaticF_g_ray_count(int32_t value);

  static inline void setStaticF_g_rays(int32_t value);

  static inline void setStaticF_g_remainder_treelets(int32_t value);

  static inline void setStaticF_g_scratch_buffer(int32_t value);

  static inline void setStaticF_g_sorted_prim_refs_offset(int32_t value);

  static inline void setStaticF_g_temp_indices_offset(int32_t value);

  static inline void setStaticF_g_trace_index_buffer(int32_t value);

  static inline void setStaticF_g_trace_vertex_buffer(int32_t value);

  static inline void setStaticF_g_trace_vertex_stride(int32_t value);

  static inline void setStaticF_g_treelet_count_offset(int32_t value);

  static inline void setStaticF_g_treelet_dispatch_buffer(int32_t value);

  static inline void setStaticF_g_treelet_offset(int32_t value);

  static inline void setStaticF_g_treelet_roots_offset(int32_t value);

  static inline void setStaticF_g_vertices(int32_t value);

  static inline void setStaticF_g_vertices_offset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SID", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SID(SID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SID", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SID(SID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::SID) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays

#include <pclomp/ndt_omp.h>
#include <pclomp/ndt_omp_impl2.hpp>

template class pclomp::NormalDistributionsTransform<pcl::PointXYZ, pcl::PointXYZ>;
template class pclomp::NormalDistributionsTransform<pcl::PointXYZI, pcl::PointXYZI>;
